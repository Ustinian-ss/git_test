#include<stdio.h>
#define CRT SECURE NO WARNINGS
int i;
void go(char x, char y)
{
    printf("step %d:monkey��%c�ߵ�%c  \n",++i,x,y);//x��ʾ���ӵ�λ��, yΪ���ӵ�λ��
}
void movebox(char x, char y)
{
    printf("step %d:monkey�����Ӵ�%c�˵�%c  \n",++i,x,y);//lx��ʾ���ӵ�λ��, yΪ�㽶��λ��
}
void onbox()
{
    printf("step %d:monkey��������\n",++i);
}
void catch()
{
    printf("step %d:monkeyժ���㽶\n",++i);
}
void main()
{ 
    char monkey, box, banana;
    printf("����a b c����ʾ���������㽶��λ��\n");
    printf("monkey\tbox\tbanana\n");
    scanf("%c", &monkey);
    getchar();
    printf("\t");
    if(monkey!=box)
  {
      scanf("%c",&banana);
      getchar();
      printf("\n������������\n");
      if(monkey!=box)
   {
      go(monkey,box);
   }
  }
    if( box!=banana)
    movebox(box,banana);
    onbox();
	catch ();
	printf("\n");
	getchar();
}

