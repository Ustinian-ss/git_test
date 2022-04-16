#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, n;
	for (i = 1; i <= 9; i++)
	{
		// 如果将下面的 for 循环注释掉，就可以输出左下三角形了
		for (n = 1; n <= 9 - i; n++)
			printf("        ");

		for (j = 1; j <= i; j++)   // 注意，这里是 j <= i， 而不是 j <= 9
			printf("%d*%d=%02d  ", i, j, i * j);  

		printf("\n");
	}
	system("pause");
	return 0;
}
