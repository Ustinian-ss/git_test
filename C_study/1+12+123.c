#include<stdio.h>
  int main()
{
    int n,i=1,m,sum;
    printf("������һ����:\n");
    scanf("%d",&n);
    while(i<=n)
	{
        m=m*10+i;
        sum+=m;
        i++;
    }
    printf("%d",sum); 
    printf("\n�ź� 2021037T0134"); 
    return 0;
}


