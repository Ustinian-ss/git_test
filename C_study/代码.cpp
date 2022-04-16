include <stdio.h>
#include <math.h>
int main()
{
   int x,y;
printf("ÇëÊäÈëxµÄÖµ:");
scanf("%d",&x);
if (x<-1)
printf("y=%d\n",y=x*x*x-1);
else if (x<=1)
      printf("y=%d\n",y=-3*x+1);
    else if (x<=10)
          printf("y=%d\n",y=3*exp(2*x-1)+5);
        else printf("y=%d\n",y=5*x+3*log10(2*x*x-1)-13);
return 0;
}
