#include<stdio.h>
 int main()
 {
 	long n,s;
 	while(scanf("%ld",&n)!=-1)
 	{
 		double s=0.0;
 		int i,a=1;
 		for(i=1;i<=2*n-1;i+=2)
 		{
 			if(((i+1)/2)%2==1)
 			s+=1.0/i;
 			else
 			s-=1.0/i;
		 }
	 
	 printf("%.5f\n",s);
	 printf("\nÕÅºÆ 2021037T0134"); }
	 return 0; 
  } 
