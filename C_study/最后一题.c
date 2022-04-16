#include<stdio.h>
int main()
{
int num[5]={0};
int cnt=0,j=0;
int below[j];
int score[10]={99,85,65,66,80,54,91,72,55};
int i;
for(i=1;i<=9;i++)
{
if(score[i]>=90 && score[i]<100)
num[1]++;
if(score[i]>=80 && score[i]<90)
num[2]++;
if(score[i]>=70 && score[i]<80)
num[3]++;
if(score[i]==100)
num[4]++;
if(score[i]>=60 && score[i]<70)
num[5]++;
if(score[i]<60)
 {
     below[j]=score[i];
     j++;
	 cnt++; 
 }
}
	printf("%d,%d,%d,%d,%d,%d\n",num[1],num[2],num[3],num[4],num[5],cnt);
	for(j=0;j<2;j++)
	printf("低于60分的有%d\n",below[j]);
	return 0;
}//此分为六十分以下段，六十·七十·八十·九十以及满分段，cnt为小于60的个数 
