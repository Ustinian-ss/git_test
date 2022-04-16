#include <iostream>
using namespace std;
#include <stdlib.h>

#define VertexNum 16    //最大顶点数 
typedef struct // 图的顶点
{
    int farmer; // 农夫 
    int wolf; // 狼 
    int sheep; //羊 
    int veget; // 白菜
}Vertex;


typedef struct
{
    int vertexNum; // 图的当前顶点数
    Vertex vertex[VertexNum]; // 顶点向量（代表顶点）
    bool Edge[VertexNum][VertexNum]; // 邻接矩阵. 用于存储图中的边，其矩阵元素个数取决于顶点个数，与边数无关
}AdjGraph;// 定义图的邻接矩阵存储结构 

bool visited[VertexNum] = { false }; // 对已访问的顶点进行标记（图的遍历） 
int retPath[VertexNum] = { -1 }; // 保存DFS搜索到的路径，即与某顶点到下一顶点的路径

// 查找顶点（F，W，S，V）在顶点向量中的位置
int locate(AdjGraph *graph, int farmer, int wolf, int sheep, int veget)
{
    for (int i = 0; i < graph->vertexNum; i++) // 从0开始查找
    {
        if (graph->vertex[i].farmer == farmer && graph->vertex[i].wolf == wolf&& graph->vertex[i].sheep == sheep && graph->vertex[i].veget == veget)
        {
            return i; //返回顶点序号i,start=0,end=9
        }

    }
    return -1;  //没有找到此顶点
}

// 判断目前的（F，W，S，V）是否安全
bool isSafe(int farmer, int wolf, int sheep, int veget)  //当农夫与羊不在一起时，狼与羊或羊与白菜在一起是不安全的
{
    if (farmer != sheep && (wolf == sheep || sheep == veget))
    {
        return false;
    }
    else
    {
        return true; // 安全返回true
    }
}
// 判断状态i与状态j之间是否可转换
bool isConnect(AdjGraph *graph, int i, int j)
{
    int k = 0;
    if (graph->vertex[i].wolf != graph->vertex[j].wolf)
    {
        k++;
    }
    if (graph->vertex[i].sheep != graph->vertex[j].sheep)
    {
        k++;
    }
    if (graph->vertex[i].veget != graph->vertex[j].veget)
    {
        k++;
    }
    // 以上三个条件不同时满足两个且农夫状态改变时，返回真,也即农夫每次只能带一件东西过河或者不带东西过河
    if (graph->vertex[i].farmer != graph->vertex[j].farmer && k <= 1)
    {
        cout << i<<"->"<<j<<"   ";
        return true;
    }
    else
    {
        return false;
    }
}

// 创建连接图
void CreateG(AdjGraph *graph)
{
    int i = 0;
    int j = 0;
    // 生成所有安全的图的顶点
    cout << "生成所有安全的图的顶点:" << endl;
    cout << "       farmer" << ", wolf" << ", sheep" << ", veget" << endl;
    for (int farmer = 0; farmer <= 1; farmer++)
    {
        for (int wolf = 0; wolf <= 1; wolf++)
        {
            for (int sheep = 0; sheep <= 1; sheep++)
            {
                for (int veget = 0; veget <= 1; veget++)
                {
                    if (isSafe(farmer, wolf, sheep, veget))
                    {
                        graph->vertex[i].farmer = farmer;
                        graph->vertex[i].wolf = wolf;
                        graph->vertex[i].sheep = sheep;
                        graph->vertex[i].veget = veget;
                        cout << "第"<<i<<"组数据组合：(" << graph->vertex[i].farmer << ",  " << graph->vertex[i].wolf << ",    " << graph->vertex[i].sheep << ",   " << graph->vertex[i].veget << ")"<<endl;
                        i++;
                    }
                }
            }
        }
    }
    cout << "i:" << i << endl;
    // 邻接矩阵初始化即建立邻接矩阵
    graph->vertexNum = i;//把产生的10组安全组合赋给vertexNum
    cout << "所有符合条件的路径：" << endl;
    for (i = 0; i < graph->vertexNum; i++)
    {
        for (j = 0; j < graph->vertexNum; j++)
        {
            // 状态i与状态j之间可转化，初始化为1，否则为0 
            if (isConnect(graph, i, j))//农夫状态必须改变，其他三个只能改变一个，只能带一个过河
            {
                graph->Edge[i][j] = graph->Edge[j][i] = true;
            }
            else
            {
                graph->Edge[i][j] = graph->Edge[j][i] = false;
            }
        }
    }
    return;
}

// 判断在河的哪一边
char* judgement(int state)
{
    return ((0 == state) ? "南岸" : "北岸");
}

// 输出从u到v的简单路径，即顶点序列中不重复出现的路径
void printPath(AdjGraph *graph, int start, int end)
{
    int i = start;
    cout << endl;
    cout << "最后符合条件的路径："<<endl;
    cout << "      farmer " << ", wolf " << ", sheep " << ", veget " << endl;
    while (i != end)
    {
        cout << "第"<<i<<"个顶点：(" << judgement(graph->vertex[i].farmer) <<":"<< graph->vertex[i].farmer<< ", " << judgement(graph->vertex[i].wolf) << ":"<<graph->vertex[i].wolf<< ", " << judgement(graph->vertex[i].sheep) <<":" <<graph->vertex[i].sheep<< ", " << judgement(graph->vertex[i].veget) << ":"<<graph->vertex[i].veget<< ")";
        cout << endl;
        i = retPath[i];
    }
    cout << "第" << i << "个顶点：(" << judgement(graph->vertex[i].farmer) << ":" << graph->vertex[i].farmer << ", " << judgement(graph->vertex[i].wolf) << ":" << graph->vertex[i].wolf << ", " << judgement(graph->vertex[i].sheep) << ":" << graph->vertex[i].sheep << ", " << judgement(graph->vertex[i].veget) << ":" << graph->vertex[i].veget << ")";
    cout << endl;
}

// 深度优先搜索从u到v的简单路径//DFS--Depth First Search 
void dfsPath(AdjGraph *graph, int start, int end)
{
    int i = 0;
    visited[start] = true;//标记已访问过的顶点
    if (start == end)
    {
        return;
    }
    for (i = 0; i < graph->vertexNum; i++)
    {
        if (graph->Edge[start][i] && !visited[i])//保证在所有路径里，并且没有被遍历过
        {
            retPath[start] = i;//把刚遍历的顶点作为起始顶点，继续往后遍历
            dfsPath(graph, i, end);
        }
    }
}


int main()
{
    AdjGraph graph;
    CreateG(&graph);
    int start = locate(&graph, 0, 0, 0, 0);//start=0
    int end = locate(&graph, 1, 1, 1, 1);//end=9
    dfsPath(&graph, start, end);
    if (visited[end])
    {
        printPath(&graph, start, end);
        system("pause");
        return 0;
    }


    //return -1;
}
