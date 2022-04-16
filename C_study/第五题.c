#include<stdio.h>
 int main()
 {
 	long fact(int n);
 	int n;
 	long y;
 	printf("\nInput n:");
 	scanf("%d",&n);
 	y=n*fact(n-1);
 	printf("%d!=%ld\n",n,y);
 	return 0;
  }
