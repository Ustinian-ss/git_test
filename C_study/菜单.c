#include <stdio.h>
#include <math.h>
 int main()
 {
 	int a,p;
 	int sum=0;
 	printf("��ѡ����Ҫ�������Ʒ��\n 1.����;2.С�ײ�;3.����;4.����;5.Ϻ;6.ţ��");
 	scanf("%d",&a);
 	switch(a)
    {
 		case 1:printf("���⣻36Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*36;
 		  break;
 		case 2:printf("С�ײˣ�5Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*5;
 		  break;
 		case 3:printf("���㣺12Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*12;
 		  break;
 		case 4:printf("������0.5Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*0.5;
 		  break;
 		case 5:printf("Ϻ��36Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*36;
 		  break;
 		case 6:printf("ţ�⣺58Ԫ/��\n");
 		  scanf("%d",&p);
 		  sum=p*58;
 		  break;
	 }
	 return 0; 
  } 
