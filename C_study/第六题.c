#include<stdio.h>
int max(int b,int c);
void main()
{
 int a[10];
 int i,n,m;
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1,m=a[0],n=0;i<10;i++)
 {
  if(max(a[i],m)>m)
  {
   m=a[i];
   n=i;
  }
 }
 printf("The largest number is %d,The position is %d",m,n);
}
int max(int b,int c)
{
 return b>c?b:c;
}
