#include<stdio.h>
void sum(int n)
{
 int sum=0;
 int i;
 for( i=2;i<=n;i+=2)
 {
  sum=sum+i;
 }
 printf("%d\n",sum);
 printf("\nÕÅºÆ 2021037T0134"); 
}
 int main()
{
 sum(100);
 return 0;
}
