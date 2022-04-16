#include<stdio.h>
#include<Windows.h>

enum fwsc //f 代表农夫，w 代表狼，s 代表羊，c 代表白菜
{
	farmer = 8, wolf = 4, sheep = 2, cabbage = 1
};

//在这里先说名currentLocation的含义，笔者认为是每一次农夫移动前后各个物体的位置分布情况。
//例如：1010 表示：农夫在河岸1，狼在河岸0，羊在河岸1，白菜在河岸0，也就是十进制的10。
//注意：currentLocation不会大于16。
int getLocation(int currentLocation, int fwsc) //找到fwsc在河的哪一侧，0表示在右侧，1表示在左侧
{
	//若返回值等于0，则表示该物体在河的东侧，即河岸0；若返回值等于1，则表示该物体在河岸西侧，即河岸1.
	switch (fwsc)
	{
	case cabbage:
		if ((currentLocation & cabbage) == 0) //2进制与运算，判断物体是否在河岸1，若在不在河岸1，则结果为0。
			return 0;
		else
			return 1;
		break;
	case sheep:
		if ((currentLocation & sheep) == 0)
			return 0;
		else
			return 1;
		break;
	case wolf:
		if ((currentLocation & wolf) == 0)
			return 0;
		else
			return 1;
		break;
	case farmer:
		if ((currentLocation & farmer) == 0)
			return 0;
		else
			return 1;
		break;
	default:
		break;
	}
	return -1;
}

int isSafe(int currentLocation) //返回0，表示不安全；返回1，表示安全。
{
	int f, w, s, c;

	f = getLocation(currentLocation, farmer);
	w = getLocation(currentLocation, wolf);
	s = getLocation(currentLocation, sheep);
	c = getLocation(currentLocation, cabbage);
	if (f != w && w == s) //若农夫不和狼在一侧，而狼却和羊在一侧
		return 0;
	else if (f != s && s == c) //若农夫不和羊在一侧，而羊却和白菜在一侧
		return 0;
	return 1;
}

int printRoute(int route[16], int status)
{
	if (status == 0)
	{
		printf("初始状态：农夫、狼、羊和白菜都在河的一侧。\n");
		return 1;
	}
	printRoute(route, route[status]);
	
	char s[200] = "";
	if ((route[status] & cabbage) == cabbage)
		strcat(s, "白菜在河岸1。");
	else
		strcat(s, "白菜在河岸0。");
	if ((route[status] & sheep) == sheep)
		strcat(s, "羊在河岸1。");
	else
		strcat(s, "羊在河岸0。");
	if ((route[status] & wolf) == wolf)
		strcat(s, "狼在河岸1。");
	else
		strcat(s, "狼在河岸0。");
	if ((route[status] & farmer) == farmer)
		strcat(s, "农夫在河岸1。");
	else
		strcat(s, "农夫在河岸0。");
	printf("%s\n", s);

	return 1;
}

int process(int route[16], int currentLocation) //农夫运送过程(核心)
{
	if (route[15] == -1) //最终状态 1111（十进制15），即fwsc都在河对岸
	{
		int mover; //代表移动的哪个物体
		for (mover = 1; mover <= 8; mover <<= 1) //这里的 mover 只有四种情况：1（0001），2（0010），4（0100），8（1000）
		{
			//下面是判断农夫是否和他所要移动的物体位于同一侧
			if (((currentLocation & farmer) == 0) == ((currentLocation & mover) == 0))
			{
				int nextLocation = currentLocation ^ (farmer | mover); //预先得出下一状态
				if (isSafe(nextLocation) && route[nextLocation] == -1) //判断下一状态是否安全，并且下一状态是否进行过了。
				{
					int nextRoute[16]; //这里再次建立路径数组是因为路径有多种可能，而一条路径数组只代表一种可能
					for (int i = 0; i < 16; i++)
						nextRoute[i] = route[i];
					nextRoute[nextLocation] = currentLocation; //若下一状态安全且没有进行，则将其标记
					process(nextRoute, nextLocation); //递归进入下一数组
				}
			}
		}
	}
	else //若到达最终状态，即fwsc都过河了，则输出结果。
		printRoute(route, 15);

	return 1; //这里的返回值没有任何意义，但我就不用void，??
}

int main()
{
	int route[16] = { -2 }, currentLocation = 0;
	for (int i = 1; i < 16; i++)
		route[i] = -1;
	process(route, currentLocation);
	system("pause");
	return 0;
}

