#include <stdio.h>
int main()
{
	int a,b,c;
	printf("input a&b:");
	  scanf("a=%d,b=%d",&a,&b);
	  c=a>b?a:b;
	  printf("max=%d\n",c);
	  return 0;
}