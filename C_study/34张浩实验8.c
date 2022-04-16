#include <stdio.h>
 int main()
 {
 	int m,n,r,a;
 	printf("\nInput 2 positive integer:\n");
 	scanf("%d%d",&m,&n);
 	a=m*n;
 	while(n!=0)
 	{
 		r=m%n;
 		m=n;
 		n=r;
	 }
	 printf("最大公约数为：%d\n",m);
	 printf("最小公倍数为；%d\n",a/m);
	 return 0;
 }
 
