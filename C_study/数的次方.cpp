#include <stdio.h>
int main()
{
	//编写代码；计算1.01与0.99的一百次方
	double x1=1.01,x2=0.99,x3=1,y1=1,y2=1,y3=1;  
	int i;
	for(i=1;i<=100;i++) 
	{
		y1=y1*x1;
		y2=y2*x2;
		y3=y3*x3;
	}
	printf("y1=%f\ny2=%f\ny3=%f\n",y1,y2,y3);
	return 0;
 } 
