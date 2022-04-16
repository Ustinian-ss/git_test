#include<stdio.h>
#include<math.h>
 int main()
{
	int x=2,n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	while(x<=n)
	{
		if(x==2||x==3||x==5||x==7)
		printf("%d\n",x);
		else
		{
			if(x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0)
			printf("%d\n",x);
		 } 
		 x++;
	}
	return 0;
 } 
