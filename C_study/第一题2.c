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
    printf("\n��������������:\n");
    scanf("%d%d",&a,&b);
    printf("���Լ��:%d\n",largedivisor(a,b));
    printf("��С������:%d\n",smallmultiple(a,b));
    return 0;
}
