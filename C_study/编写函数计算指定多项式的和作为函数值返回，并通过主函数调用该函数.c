#include <stdio.h>
#include<math.h> 
void main()
{
	float qiuhe(int n);
	int n;
	float sum;
	scanf("%d",&n);
	sum=qiuhe(n);
	printf("%f",sum);
}
 float qiuhe(int n) 
{
	float sum=1.0;
	int i;
	for(i=2;i<=n;i++)
	if(i%2==0)
	 sum=sum-1.0/i;
	 else
	 sum=sum+1.0/i;
	 return sum;
}
	 
	
