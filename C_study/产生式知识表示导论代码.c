#include<stdio.h>
int main()
{
char a1;
char flag0 ;//�Ƿ�ʶ�������ı�־
char *str0="��ϵͳ��ʶ�����ֶ������Ѿ��N��ʾ�Ǻͷ�\n";char *str1 ="���������ë����?";
char *str2="�������������?";char *str3 ="�����������ë��?";char *str4 ="���������µ���?";char *str5 ="������������? ";
char *str6 = "���������Ȯ����צ��? ";char *str7= "�������������t";
char *str8= "��������ǽ���ۻ������?";
char *str9 ="������������ǻƺ�ɫ�����а��ߵ���?";char *str10= "������������ǻƺ�ɫ�����к�ɫ����?";char *str11 ="������ﳤ�ȳ������������а��ߵ���?";char *str12="������������к�ɫ������?";
char *str13 ="������ﳤ�ȳ�����?";
char *str14 ="����������Ӿ���кڰ���ɫ\t";char *str15="��������÷�";
char *str16="�������᲻���";
char *ans0 = "��Ǹ����Ҳ��֪������ʲô����";char *ans1 ="��������ǽ�Ǯ��";
char *ans2 ="����������ϻ�";char *ans3 = "��������ǳ���¹";char *ans4 ="��������а���";char *ans5 ="������������";char *ans6 ="�������������";char *ans7 ="���������������";char *a[4] = { str1,str2,str3,str4 };
//�жϲ��鶯�������
char *bl[4]= { str5,str6,str7,str8 };
//�ж���ʳ�ݶ��ﻹ��ʳ�⶯��
char *b20= { str16 };
//�ж�����᲻���
/****************������������ֶ���*************************/
char *cl[]= { str9,str10 };
//�жϽ�Ǯ�����ϻ�
char *c2[]= { str11,str12 };
//�жϳ���¹�Ͱ���
char *c3[]= { str13,str14 };
//�ж���������
char *c4[]= { str15 };
//�ж��ǲ���������
puts(str0);
int k; 
for (k = 0; k <4; k++){
puts(a[k]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')//���ֲ��鶯�������{
if (k == 1){
printf_s("�����ж��ǲ��鶯��\n"); flag0 = 0; break;
}
else if (k > 2){
printf_s("�����ж�������\n"); flag0 = 1; break;
}
}
}
if (flag0 = 0)
{      //�ж��ǲ��鶯��
for (int k = 0; k <4; k++){
puts(bl[k]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')//����ʳ�⶯���ʳ���ද��{
if (k == 1){
printf_s("�����ж���ʳ�⶯��\n");for (int k = 0; k< 2; k++){
puts(cl[k]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')
//���ֽ�Ǯ�����ϻ�
{
printf_s("�����ǽ�Ǯ��"); break;
}
else if (a1 == 'N'&&k == 1) {
printf_s("�����ϻ�"); break;
}
}break;
}
else if (k >2){
printf_s("�����ж���ʳ���ද��\n");for (int k = 0;k <2; k++){
puts(c2[k]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')
//ȷ���ǳ���¹���ǰ���
{
printf_s("���ǳ���¹"); break;
}
else if (a1 == 'N'&&k == 1) {
printf_s("���ǰ���"); break;
}
l
break;
}
}
}
}
else if (flag0 ==1){//�ж�������
puts(b2[0]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')//�ж�����᲻���{
puts(c4[0]);
scanf_s("%c",&a1,1);getchar();
if (a1 == 'Y'){
//�ж��ǲ���������
printf_s("����������");
}
else if(a1 == 'N')
{
puts(ans0);
}
}
else if (a1 == 'N'){
for (int k = 0; k <2; k++){
puts(c3[K]);
scanf_s("%c", &a1,1);getchar();
if (a1 == 'Y')
//ȷ������������
{
printf_s("��������"); break;
}
else if (a1 == 'N'&&k == 1){
printf_s("�������"); break;
}
}
}
getchar();return 0;




