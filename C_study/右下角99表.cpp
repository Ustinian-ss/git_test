#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, n;
	for (i = 1; i <= 9; i++)
	{
		// ���������� for ѭ��ע�͵����Ϳ������������������
		for (n = 1; n <= 9 - i; n++)
			printf("        ");

		for (j = 1; j <= i; j++)   // ע�⣬������ j <= i�� ������ j <= 9
			printf("%d*%d=%02d  ", i, j, i * j);  

		printf("\n");
	}
	system("pause");
	return 0;
}
