#include <stdio.h>
#include  <math.h> 
 int main()
{
   int x,y;
   printf ("«Î ‰»Îx£ª")
   scanf ("%d",&x) 
   if (x<-1)
   
 	y=x*x*x-1;
 	printf("%d\n",y);
   
   else if(-1<=x<=1)
   
 	y=-3*x+1;
 	printf("%d\n",y);
   
   else if(1<=x<=10)
   
 	y=3*exp(2*x-1)+5;
 	printf("%d\n",y);
   
   else (x>10)
   
 	y=5*x+3*log10(2*x*x-1)-13;
 	printf("%d\n",y);
   
    return 0;
}
