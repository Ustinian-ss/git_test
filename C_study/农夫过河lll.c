#include <stdio.h>
#define N 100
int a[N][4];
int step=0;
void p(int q)
{
  if(q==0)
    printf("人 ");
  else if(q==1)
    printf("狼 ");
  else if(q==2)
    printf("羊 ");
  else if(q==3)
    printf("白菜 ");
}
int pd(int a[][4])
{
  int g=1;
    if(a[step][0]==a[step][2]||(a[step][1]!=a[step][2]&&a[step][2]!=a[step][3]))
    {
      if(step>=2)
       if(a[step][1]==a[step-2][1]&&a[step-2][2]==a[step][2]&&a[step][3]==a[step-2][3])
        return(0);
        return(1);
    }
    else return(0);
}
void main()
{
  void p(int q);
  int pd(int a[][4]);
  int i,j;
    for(j=0; j<4; j++)
      a[step][j]=0;
    for(step=0; a[step][0]+a[step][1]+a[step][2]+a[step][3]!=4;)
    {
      step++;
      for(j=0; j<4; j++)
       a[step][j]=a[step-1][j];
      if(step%2==0)
        {
          a[step][0]=0;
          for(j=0; j<4; j++)
          {
            if(a[step][j]==1)
            {
             a[step][j]=0;
             if(pd(a))break;
             else a[step][j]=1;
            }
            else if(pd(a))break;
          }
        }
     else
     {
      a[step][0]=1;
      for(j=0; j<4; j++)
      {
       if(a[step][j]==0)
        {
         a[step][j]=1;
         if(pd(a))break;
         else a[step][j]=0;
        }
       else
       {
         if(pd(a))break;
       }
      }
    }
  }
for(i=1;; i++)
 {
  if(i%2==1)
  {
    for(j=0; j<4; j++)if((a[i][j]-a[i-1][j])==1)p(j);
     printf("过河\n");
  }
  if(i%2==0)
   {
     for(j=0; j<4; j++)if((a[i][j]-a[i-1][j])==-1)p(j);
      printf("回来\n");
   }
  if((a[i][0]+a[i][1]+a[i][2]+a[i][3])==4)
    break;
 }
printf("完成\n");
}
