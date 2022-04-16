#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int num=0; //设置一个num来记录移动的次数
 void move(char a,int n,char c)
 {
   num++;
   printf("<%d>:将%d号盘子从%c移动到%c\n",num,n,a,c);
 }
 void Hanoi(int n,char A,char B,char C)
 {
  if(n==1)
  move(A,1,C); //结束条件
  else
   {
     Hanoi(n-1,A,C,B);
     move(A,n,C);
     Hanoi(n-1,B,A,C);
   }
 }
 int main(){
 int n,x;
 printf("自动获取圆盘数请按 (1)，手动输入请按 (2)\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1: 
 {
 srand((unsigned)time(NULL)); //为了防止随机数每次重复，使用系统时间来初始化
 n =1 + rand()%5; //随机获得 1-5 之间的 数
 printf("获得随机数%d\n",n);
 printf("移动%d个圆盘的过程为:\n",n);
 Hanoi(n,'A','B','C');
 break;
 }
 case 2:
 {
 printf("请输入圆盘数:");
 scanf("%d",&n);
 printf("移动%d个圆盘的过程为:\n",n);
 Hanoi(n,'A','B','C');
 break;
 }
 default:
 {
 printf("输入有误!");
 break;
 }
 }
 return 0;
 }
