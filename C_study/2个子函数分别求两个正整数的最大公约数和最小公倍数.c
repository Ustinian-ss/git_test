#include<stdio.h>
int largedivisor(int m,int n)
{
 int r;
 while(n!=0)
 {
  r=m%n;
  m=n;
  n=r;
 }
 return m;
}
int smallmultiple(int m,int n)
{
 return m*n/largedivisor(m,n);
}
int main()
{
    int a,b;
    printf("\n输入两个正整数:\n");
    scanf("%d%d",&a,&b);
    printf("最大公约数:%d\n",largedivisor(a,b));
    printf("最小公倍数:%d\n",smallmultiple(a,b));
    return 0;
}
