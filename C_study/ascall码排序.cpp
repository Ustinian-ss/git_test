#include<stdio.h>
char c1,c2,c3;
void ascll()
{
char sum;
if(c1>=c2)
{
sum=c1;
c1=c2;
c2=sum;  
}
if(c2>=c3)
{
sum=c2;
c2=c3;
c3=sum;
}
if(c1>=c2)
{
sum=c1;
c1=c2;
c2=sum;
}
}
int main()
{
int n,i;
scanf("%d",&n);
for(i=0; i<n; i++)
{
getchar();
scanf("%c%c%c",&c1,&c2,&c3);

printf("%c %c %c\n",c1,c2,c3);
}
return 0;
}
