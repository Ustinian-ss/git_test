#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,n,i=0;
	printf("������һ����:\n");
	scanf("%d",&n);
	for(x=2;x<=n;x++)
	{
		for(y=2;y<=sqrt(x);y++)
		{
			if(x%y==0)
			i++;
		}
		if(i==0)
		printf("%d��2��%d֮�������\n",x,n);
		i=0;
	}
	return 0;
 } 
