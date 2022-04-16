#include<stdio.h>
#define CRT SECURE NO WARNINGS
int i;
void go(char x, char y)
{
    printf("step %d:monkey从%c走到%c  \n",++i,x,y);//x表示猴子的位置, y为箱子的位置
}
void movebox(char x, char y)
{
    printf("step %d:monkey把箱子从%c运到%c  \n",++i,x,y);//lx表示箱子的位置, y为香蕉的位置
}
void onbox()
{
    printf("step %d:monkey爬上箱子\n",++i);
}
void catch()
{
    printf("step %d:monkey摘到香蕉\n",++i);
}
void main()
{ 
    char monkey, box, banana;
    printf("请用a b c来表示猴子箱子香蕉的位置\n");
    printf("monkey\tbox\tbanana\n");
    scanf("%c", &monkey);
    getchar();
    printf("\t");
    if(monkey!=box)
  {
      scanf("%c",&banana);
      getchar();
      printf("\n操作步骤如下\n");
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

