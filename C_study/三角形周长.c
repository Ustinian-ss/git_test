#include <stdio.h>
int ZHOUCHANG(int a,int b,int c)
{
    if( (a+b)<=c || (a+c)<=b || (b+c)<=a ) 
    {
        printf("������������\n");
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
    printf("�����������ε������߳�\n");
	scanf("%d%d%d",&a,&b,&c); 
    printf("�����ε��ܳ��ǣ�%d\n", ZHOUCHANG(a,b,c));
    return 0;
}

