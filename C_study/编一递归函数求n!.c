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
  long fact(int n)
  {
  	long f;
  	if(n==1)
  	 f=1;
  	 else
  	  f=n*fact(n-1);
  	return f;
  }
  

