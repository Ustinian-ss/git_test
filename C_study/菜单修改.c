#include<stdio.h>
float main()
{
 float b=0,c=0,d=0,e=0,f=0,g=0;
 double m=0;
 int a,h=1;
 printf("************************************\n"); 
 printf("      \n");
 printf("*1-���⣺36Ԫ/��  2-С�ײˣ�5Ԫ/��*\n");
 printf("*3-���㣺12Ԫ/��  4-������0.5Ԫ/��*\n");
 printf("*5-Ϻ��36Ԫ/��    6-ţ�⣺58Ԫ/��*\n"); 
 printf("*      \n");
 printf("      \n");
 printf("************************************\n");
 printf("   \n");
 while (h==1)
 { printf("��������Ҫ������߲����");
 scanf("%d",&a);
  switch(a)
 {
  case 1:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&b);
    m=m+36*b;
    break;
   }
  case 2:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&c);
    m=m+5*c;
    break;
   }
  case 3:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&d);
    m=m+12*d;
    break;
   }
  case 4:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&e);
    m=m+0.5*e;
    break;
   }
  case 5:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&f);
    m=m+36*f;
    break;
   }
  case 6:
   {
    printf("��������Ҫ����Ľ���");
    scanf("%f",&g);
    m=m+58*g;
    break;
   }
 }
    printf("����Ҫ������������������1����������2");
    scanf("%d",&h);
 }
 printf("��Ӧ��%fԪ",m);
 printf("лл����!");
 return 0;
}
