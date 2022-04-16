#include<stdio.h>
void main()
{
    float qh(int);
    int n;
    float sum;
    scanf(" %d" ,&n);
    sum=qh(n);
    printf("%f" ,sum);
}
float qh(int n)
{
    float sum=1.0;
    int i;
    for(i=2;i<=n;i++)
    if(i%2==0)
       sum=sum-1.0/i;
    else
    sum=sum+1.0/i;
    return sum;
}
