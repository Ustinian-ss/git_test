#include<stdio.h>
#define N 10
int i=0,j=0,cut=0;
 int below[10]; 
 int score[10];
  int shuru()
{
  printf("请输入学生成绩");
 for(i=0;i<N;i++)
  scanf("%d",&score[i]);
}
int panduan()
{
    if(score[i]<60)
  {
  	below[j]=score[i];
  	for(j;j<N;j++)
  	cut++;
   } 
   }
int main()
{
	int shuru(); 
	int panduan();
	printf("%d",cnt); 
}
