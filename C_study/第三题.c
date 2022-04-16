#include<stdio.h>
 float fun(double h)
{
 int a,b,c;
 double d;
 a=x*1000;
 b=x*100;
 c=a%10;
 if(c>4) d=(b+1.0)/100.0;
 else d=b/100.0;
 return(d);
 
}
void main()
{
 double x,y;
 printf("请输入一个小数：");
 scanf("%lf",&x);
 y=fun(x);
 printf("四舍五入后取得：%f\n",y);
}
