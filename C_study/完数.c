#include<stdio.h>
int main()
{
 int i,j,sum;
 for(i=3;i<=10000;i++)
 {
  sum=1;
  for(j=2;j<i;j++)
  {
   if((i%j)==0)
   {
    sum=sum+j;
   }
  }
  if(sum==i)
  {
   printf("%d\t",i);
  }
 }
 printf("\nÕÅºÆ 2021037T0134");
 return 0;
}
