#include<stdio.h> 
 int n;
void move(int k, char from, char to) 
{  
static int Ser_num;  Ser_num++;  
printf("%3d  k=%2d   %c-->%c\n",Ser_num,k,from, to);  
return;
}void hanoi(int n) 
{  int movenum=1;  
int i,m,n_k,k,j;  
for (i=0; i    movenum *= 2;  } 
 movenum--; for (i=1; i<=movenum; i++) {    m=i;    n_k=0;    while (m%2==0) {      n_k++;      m=m/2;    }    k=n-n_k;    j=m/2;    if (k%2==0) {      switch(j%3) {        case 0: move(k,'A','B'); break;        case 1: move(k,'B','C'); break;        case 2: move(k,'C','A'); break;      }    } else {      switch(j%3) {        case 0: move(k,'A','C'); break;        case 1: move(k,'C','B'); break;        case 2: move(k,'B','A'); break;      }    }  }}int main() {  printf("请输入A座上的盘子数目(0<=exit)：");  scanf("%d",&n);  if (n>0) {    printf("序号 盘号   移动\n");    hanoi(n);  }  return 0;}
