#include <stdio.h> 
void solve(int num,char z1,char z2,char z3);
int main() 
{
	int n;
	printf("��������������:");
	scanf("%d",&n);
	solve(n,'A','B','C');
}
void solve(int num,char z1,char z2,char z3) 
{
	if(num>0) 
	{
	  solve(num-1,z1,z3,z2);
	  printf("��%c�ϵ������Ƶ�%c��\n",z1,z3);
	  solve(num-1,z2,z1,z3);
	}
}

