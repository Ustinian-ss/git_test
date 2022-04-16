#include <iostream>
using namespace std;
#include <stdlib.h>

#define VertexNum 16    //��󶥵��� 
typedef struct // ͼ�Ķ���
{
    int farmer; // ũ�� 
    int wolf; // �� 
    int sheep; //�� 
    int veget; // �ײ�
}Vertex;


typedef struct
{
    int vertexNum; // ͼ�ĵ�ǰ������
    Vertex vertex[VertexNum]; // ���������������㣩
    bool Edge[VertexNum][VertexNum]; // �ڽӾ���. ���ڴ洢ͼ�еıߣ������Ԫ�ظ���ȡ���ڶ��������������޹�
}AdjGraph;// ����ͼ���ڽӾ���洢�ṹ 

bool visited[VertexNum] = { false }; // ���ѷ��ʵĶ�����б�ǣ�ͼ�ı����� 
int retPath[VertexNum] = { -1 }; // ����DFS��������·��������ĳ���㵽��һ�����·��

// ���Ҷ��㣨F��W��S��V���ڶ��������е�λ��
int locate(AdjGraph *graph, int farmer, int wolf, int sheep, int veget)
{
    for (int i = 0; i < graph->vertexNum; i++) // ��0��ʼ����
    {
        if (graph->vertex[i].farmer == farmer && graph->vertex[i].wolf == wolf&& graph->vertex[i].sheep == sheep && graph->vertex[i].veget == veget)
        {
            return i; //���ض������i,start=0,end=9
        }

    }
    return -1;  //û���ҵ��˶���
}

// �ж�Ŀǰ�ģ�F��W��S��V���Ƿ�ȫ
bool isSafe(int farmer, int wolf, int sheep, int veget)  //��ũ��������һ��ʱ�������������ײ���һ���ǲ���ȫ��
{
    if (farmer != sheep && (wolf == sheep || sheep == veget))
    {
        return false;
    }
    else
    {
        return true; // ��ȫ����true
    }
}
// �ж�״̬i��״̬j֮���Ƿ��ת��
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
    // ��������������ͬʱ����������ũ��״̬�ı�ʱ��������,Ҳ��ũ��ÿ��ֻ�ܴ�һ���������ӻ��߲�����������
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

// ��������ͼ
void CreateG(AdjGraph *graph)
{
    int i = 0;
    int j = 0;
    // �������а�ȫ��ͼ�Ķ���
    cout << "�������а�ȫ��ͼ�Ķ���:" << endl;
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
                        cout << "��"<<i<<"��������ϣ�(" << graph->vertex[i].farmer << ",  " << graph->vertex[i].wolf << ",    " << graph->vertex[i].sheep << ",   " << graph->vertex[i].veget << ")"<<endl;
                        i++;
                    }
                }
            }
        }
    }
    cout << "i:" << i << endl;
    // �ڽӾ����ʼ���������ڽӾ���
    graph->vertexNum = i;//�Ѳ�����10�鰲ȫ��ϸ���vertexNum
    cout << "���з���������·����" << endl;
    for (i = 0; i < graph->vertexNum; i++)
    {
        for (j = 0; j < graph->vertexNum; j++)
        {
            // ״̬i��״̬j֮���ת������ʼ��Ϊ1������Ϊ0 
            if (isConnect(graph, i, j))//ũ��״̬����ı䣬��������ֻ�ܸı�һ����ֻ�ܴ�һ������
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

// �ж��ںӵ���һ��
char* judgement(int state)
{
    return ((0 == state) ? "�ϰ�" : "����");
}

// �����u��v�ļ�·���������������в��ظ����ֵ�·��
void printPath(AdjGraph *graph, int start, int end)
{
    int i = start;
    cout << endl;
    cout << "������������·����"<<endl;
    cout << "      farmer " << ", wolf " << ", sheep " << ", veget " << endl;
    while (i != end)
    {
        cout << "��"<<i<<"�����㣺(" << judgement(graph->vertex[i].farmer) <<":"<< graph->vertex[i].farmer<< ", " << judgement(graph->vertex[i].wolf) << ":"<<graph->vertex[i].wolf<< ", " << judgement(graph->vertex[i].sheep) <<":" <<graph->vertex[i].sheep<< ", " << judgement(graph->vertex[i].veget) << ":"<<graph->vertex[i].veget<< ")";
        cout << endl;
        i = retPath[i];
    }
    cout << "��" << i << "�����㣺(" << judgement(graph->vertex[i].farmer) << ":" << graph->vertex[i].farmer << ", " << judgement(graph->vertex[i].wolf) << ":" << graph->vertex[i].wolf << ", " << judgement(graph->vertex[i].sheep) << ":" << graph->vertex[i].sheep << ", " << judgement(graph->vertex[i].veget) << ":" << graph->vertex[i].veget << ")";
    cout << endl;
}

// �������������u��v�ļ�·��//DFS--Depth First Search 
void dfsPath(AdjGraph *graph, int start, int end)
{
    int i = 0;
    visited[start] = true;//����ѷ��ʹ��Ķ���
    if (start == end)
    {
        return;
    }
    for (i = 0; i < graph->vertexNum; i++)
    {
        if (graph->Edge[start][i] && !visited[i])//��֤������·�������û�б�������
        {
            retPath[start] = i;//�Ѹձ����Ķ�����Ϊ��ʼ���㣬�����������
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
