#include<stdio.h>
  int main()
{
    int n,i=1,m,sum;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    while(i<=n)
	{
        m=m*10+i;
        sum+=m;
        i++;
    }
    printf("%d",sum); 
    printf("\n张浩 2021037T0134"); 
    return 0;
}


