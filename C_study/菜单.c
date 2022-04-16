#include <stdio.h>
#include <math.h>
 int main()
 {
 	int a,p;
 	int sum=0;
 	printf("ÇëÑ¡ÔñÄúÒª¹ºÂòµÄÉÌÆ·£º\n 1.ÊÝÈâ;2.Ð¡°×²Ë;3.²ÝÓã;4.¶¹¸¯;5.Ïº;6.Å£Èâ");
 	scanf("%d",&a);
 	switch(a)
    {
 		case 1:printf("ÊÝÈâ£»36Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*36;
 		  break;
 		case 2:printf("Ð¡°×²Ë£º5Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*5;
 		  break;
 		case 3:printf("²ÝÓã£º12Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*12;
 		  break;
 		case 4:printf("¶¹¸¯£º0.5Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*0.5;
 		  break;
 		case 5:printf("Ïº£º36Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*36;
 		  break;
 		case 6:printf("Å£Èâ£º58Ôª/½ï\n");
 		  scanf("%d",&p);
 		  sum=p*58;
 		  break;
	 }
	 return 0; 
  } 
