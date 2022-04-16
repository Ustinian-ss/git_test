#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int num=0; //����һ��num����¼�ƶ��Ĵ���
 void move(char a,int n,char c)
 {
   num++;
   printf("<%d>:��%d�����Ӵ�%c�ƶ���%c\n",num,n,a,c);
 }
 void Hanoi(int n,char A,char B,char C)
 {
  if(n==1)
  move(A,1,C); //��������
  else
   {
     Hanoi(n-1,A,C,B);
     move(A,n,C);
     Hanoi(n-1,B,A,C);
   }
 }
 int main(){
 int n,x;
 printf("�Զ���ȡԲ�����밴 (1)���ֶ������밴 (2)\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1: 
 {
 srand((unsigned)time(NULL)); //Ϊ�˷�ֹ�����ÿ���ظ���ʹ��ϵͳʱ������ʼ��
 n =1 + rand()%5; //������ 1-5 ֮��� ��
 printf("��������%d\n",n);
 printf("�ƶ�%d��Բ�̵Ĺ���Ϊ:\n",n);
 Hanoi(n,'A','B','C');
 break;
 }
 case 2:
 {
 printf("������Բ����:");
 scanf("%d",&n);
 printf("�ƶ�%d��Բ�̵Ĺ���Ϊ:\n",n);
 Hanoi(n,'A','B','C');
 break;
 }
 default:
 {
 printf("��������!");
 break;
 }
 }
 return 0;
 }
