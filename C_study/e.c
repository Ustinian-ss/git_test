#include <stdio.h>
void fun(int x[],int m,int *n){
 int i,j,k=0; 
 for(i=0;i<m;i++)
 { 
  for(j=2;j<i;j++)
  {
   if(i%j==0)
   {
    x[k++]=i;
    break; 
   }
  }  
 }
 *n=k; 
}
void main()
{
    int i,n,m,count=0; 
 int x[128]; 
 printf("请输入一个数：");
 scanf("%d",&m);
 printf("非素数如下：\n");
 for(i=0;i<n;i++)
 {
  fun(x,m,&n);
  printf("%d\t",x[i]);
  count++;
  if(count%5==0)
  {
   printf("\n");
  }
 }
}
