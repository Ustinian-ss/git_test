#include <stdio.h>
int main(void)
{
   int m, cnt = 0, i, j;
     int array[101];
 printf("Input:\nPlease input a number: \n");
 scanf("%d", &m);
 for (i = 2; i < m; i++)
 {
  for (j = 2; j < i; j++)
  {
   if (i % j == 0)
   {
    break;
   }
  }
  if (j == i)
  {
   array[cnt++] = i;
  }
  if (cnt > 100)
  {
   break;
  }
 }
 printf("Output:\n");
 if (m <= 0)
 {
  printf("error!\n");
 }
 else if (cnt > 100)
 {
  printf("overflow!\n");
 }
 else
 {
  printf("n=%d\n", cnt);
  for (i = 0; i < cnt; i++)
  {
   printf("%5d", array[i]);
   if ((i + 1) % 15 == 0)
   {
    printf("\n");
   }
  }
  printf("\n");
 }
 return 0;
}
