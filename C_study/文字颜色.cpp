#include <stdio.h>
#include <windows.h>
int main(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 0xC );
puts("��ɫ����");
SetConsoleTextAttribute(hConsole, 0xF );
puts("��ɫ����");
SetConsoleTextAttribute(hConsole, 2 );
puts("����ɫ����");
return 0;
}
