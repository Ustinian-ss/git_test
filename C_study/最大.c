#include <stdio.h>
  int main() 
{
 int m;
 int arr[10];
 printf("请输入十个数：");
 for (m;m<10;m++)
 scanf("%d",&arr[m]);
 {
	int max=arr[0];
 	for (m=1;m<10;m++)
 	  {
	   if (max>arr[m])
 	   max=max;
 	   else
 	   max=arr[m];
      }
      printf("最大数为；%d\n",max);
      printf("\n张浩 2021037T0134");
 }
 return 0;
}
