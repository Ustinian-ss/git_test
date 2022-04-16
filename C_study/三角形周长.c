#include <stdio.h>
int ZHOUCHANG(int a,int b,int c)
{
    if( (a+b)<=c || (a+c)<=b || (b+c)<=a ) 
    {
        printf("不构成三角形\n");
        return 0;                                
    }
    else
    {
      int ZHOUCAHNG= a+b+c;  
      return ZHOUCAHNG;
    }  
}
int main()
{
    int a, b, c;
    printf("请输入三角形的三条边长\n");
	scanf("%d%d%d",&a,&b,&c); 
    printf("三角形的周长是：%d\n", ZHOUCHANG(a,b,c));
    return 0;
}

