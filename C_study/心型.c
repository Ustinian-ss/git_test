#include<stdio.h>
#include <graphics>
#include <math.h>
#include <conio.h>
#define PI 3.1415926  //���������ߵĺ���void cardioid(int x, int y, int a)//x: x��

���ϵ�ƫ����//y: y�����ϵ�ƫ����//a: ���ű���

{ int x1, y1, x2, y2; 
  while (angle <= 2 * PI)
 {  
   x1 = a * (2 * sin(angle) + sin(2 * angle)) + x;   
  y1 = a * (2 * cos(angle) + cos(2 * angle)) + y;   
  angle += (PI / 180);   

 x2 = a * (2 * sin(angle) + sin(2 * angle)) + x;   

 y2 = a * (2 * cos(angle) + cos(2 * angle)) + y;

 line(x1, y1, x2, y2); Sleep(5); 
 }
 }
  int main (void)

{ 
initgraph(960, 540);
  setlinecolor(RGB(255, 0, 0)); 
  cardioid(480, 270, 50); 
  int ret = getch(); closegraph(); 
  return 0;
 }
