#include <stdio.h>
int main()
{
   int score, max, min, sum, i;
   double m;
   printf("请输入分数\n"); 
   scanf("%d", &score);
do 
{
     i++;
     if (score > max)
     max = score;
     if (score < min)
     min = score;
     sum += score;
     scanf("%d", &score);
} 
   while(score != -1);
   m = (double)sum / (double)i;
   if(score==-1)
   printf("%d,  %f\n", max, m);
   printf("\n张浩 2021037T0134"); 
   return 0;
}
