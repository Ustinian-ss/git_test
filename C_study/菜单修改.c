#include<stdio.h>
float main()
{
 float b=0,c=0,d=0,e=0,f=0,g=0;
 double m=0;
 int a,h=1;
 printf("************************************\n"); 
 printf("      \n");
 printf("*1-瘦肉：36元/斤  2-小白菜：5元/斤*\n");
 printf("*3-草鱼：12元/斤  4-豆腐：0.5元/斤*\n");
 printf("*5-虾：36元/斤    6-牛肉：58元/斤*\n"); 
 printf("*      \n");
 printf("      \n");
 printf("************************************\n");
 printf("   \n");
 while (h==1)
 { printf("请输入您要购买的蔬菜序号");
 scanf("%d",&a);
  switch(a)
 {
  case 1:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&b);
    m=m+36*b;
    break;
   }
  case 2:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&c);
    m=m+5*c;
    break;
   }
  case 3:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&d);
    m=m+12*d;
    break;
   }
  case 4:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&e);
    m=m+0.5*e;
    break;
   }
  case 5:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&f);
    m=m+36*f;
    break;
   }
  case 6:
   {
    printf("请输入您要购买的斤数");
    scanf("%f",&g);
    m=m+58*g;
    break;
   }
 }
    printf("您还要继续购买吗？是请输入1，否请输入2");
    scanf("%d",&h);
 }
 printf("您应付%f元",m);
 printf("谢谢购买!");
 return 0;
}
