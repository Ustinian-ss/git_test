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
	 printf("���Լ��Ϊ��%d\n",m);
	 printf("��С������Ϊ��%d\n",a/m);
	 return 0;
 }
 
