#include <stdio.h>
#include <stdlib.h>

/*������A��B��C����������ʼʱA������64�����ӣ����Ӵ�С���ȣ�������£�С�����ϡ��Ϻ������A���ϵ�����ȫ��
�Ƶ�C���ϣ���ÿ��ֻ�����ƶ�һ���̣������ƶ���������������ʼ�ձ��ִ������£�С�����ϵ�˳���ƶ������п�������B����
д��������ƶ�����*/

int sum = 0; 
void main(){
	int n;
	char one='A',two='B',three='C';
	void tod(int n,char one,char two,char three);
            /*�βεĺ���Ϊ������two����n�����Ӵ�one�Ƶ�three*/
	printf("����A����һ�����ٸ����ӣ�");
	scanf("%d",&n);
    tod(n,one,two,three);
    printf("һ���ƶ�%d��",sum);
} 
void tod(int n,char one,char two,char three){
	void move(char from,char to);
	
	if(n == 1)
	 move(one,three);
	else
	{
		tod(n-1,one,three,two);//���巨����������������ӿ���һ�����壬��A����ֻʣһ���������� 
		move(one,three);//����һ�����������ƶ���C 
		tod(n-1,two,one,three);//ͬ�������巨����B����ֻʣһ���������� 
	}
}
void move(char from,char to){//ʵ����ʵ���ƶ��Ĳ��� 
	printf("%c-->%c\n",from,to);
	sum++;
}

