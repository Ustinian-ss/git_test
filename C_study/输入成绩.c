#include <stdio.h>
int main()
{
   int score, max, min, sum, i;
   double m;
   printf("���������\n"); 
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
   printf("\n�ź� 2021037T0134"); 
   return 0;
}
