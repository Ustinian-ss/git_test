#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,sum,flag;
	printf("请输入一个数：\n");
	scanf("%d",&n);
	sum=0;
	for (i=2;i<=n;i++)
	 {
	 	flag=0;
	 	for(j=2;j<=sqrt(i*1);j++)
	 	{
		 if(i%j==0)
		    flag=1;
		 }
		 if(flag==0)
		    sum=sum+i;
	 }
	 printf("%d",sum);
	 printf("\n张浩 2021037T0134");
	 return 0; 
}

