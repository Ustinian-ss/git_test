#include <stdio.h>
#include <stdlib.h>

/*塔中有A、B、C三座塔，开始时A座上有64个盘子，盘子大小不等，大的在下，小的在上。老和尚想把A座上的盘子全部
移到C座上，但每次只允许移动一个盘，且在移动过程中三个座上始终保持大盘在下，小盘在上的顺序，移动过程中可以利用B座。
写程序输出移动步骤*/

int sum = 0; 
void main(){
	int n;
	char one='A',two='B',three='C';
	void tod(int n,char one,char two,char three);
            /*形参的含义为，借助two座将n个盘子从one移到three*/
	printf("输入A座上一共多少个盘子：");
	scanf("%d",&n);
    tod(n,one,two,three);
    printf("一共移动%d次",sum);
} 
void tod(int n,char one,char two,char three){
	void move(char from,char to);
	
	if(n == 1)
	 move(one,three);
	else
	{
		tod(n-1,one,three,two);//整体法，将上面的所有盘子看作一个整体，令A座上只剩一个最大的盘子 
		move(one,three);//将那一个最大的盘子移动到C 
		tod(n-1,two,one,three);//同样的整体法，令B座上只剩一个最大的盘子 
	}
}
void move(char from,char to){//实际上实现移动的操作 
	printf("%c-->%c\n",from,to);
	sum++;
}

