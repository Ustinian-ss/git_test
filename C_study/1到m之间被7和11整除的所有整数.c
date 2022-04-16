#include <stdio.h>
#define N 100
int fun(int m,int a[])
{
	int i,j=0,t=0;
	for (i=1;i<=m;i++)
	if(i%7==0||i%11==0)
	{
		a[j++]=i;
		t++; 
	}
	return t;
 } 
 void outputdata(int a[],int n)
 {
 	int i;
	 for(i=0;i<n;i++)
	 printf("%5d",a[i]);
	 printf("\n");
 }
 main()
 {
 	int arr[N];
 	int m,cnt;
 	scanf("%d",&m);
 	cnt=fun(m,arr);
 	outputdata(arr,cnt);
  }