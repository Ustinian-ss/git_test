#include <stdio.h>
 int main()
{
	int a,b,c,d,e,f;//a与b是输入的两个整数，c.d.e.f分别对应和.差.积.商。 
	printf("输入两个整数a和b；"); 
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("%d %d %d %d\n",c,d,e,f);
	return 0;
  }  
