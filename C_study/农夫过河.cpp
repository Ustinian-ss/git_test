#include<stdio.h>
#include<Windows.h>

enum fwsc //f ����ũ��w �����ǣ�s ������c ����ײ�
{
	farmer = 8, wolf = 4, sheep = 2, cabbage = 1
};

//��������˵��currentLocation�ĺ��壬������Ϊ��ÿһ��ũ���ƶ�ǰ����������λ�÷ֲ������
//���磺1010 ��ʾ��ũ���ںӰ�1�����ںӰ�0�����ںӰ�1���ײ��ںӰ�0��Ҳ����ʮ���Ƶ�10��
//ע�⣺currentLocation�������16��
int getLocation(int currentLocation, int fwsc) //�ҵ�fwsc�ںӵ���һ�࣬0��ʾ���Ҳ࣬1��ʾ�����
{
	//������ֵ����0�����ʾ�������ںӵĶ��࣬���Ӱ�0��������ֵ����1�����ʾ�������ںӰ����࣬���Ӱ�1.
	switch (fwsc)
	{
	case cabbage:
		if ((currentLocation & cabbage) == 0) //2���������㣬�ж������Ƿ��ںӰ�1�����ڲ��ںӰ�1������Ϊ0��
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

int isSafe(int currentLocation) //����0����ʾ����ȫ������1����ʾ��ȫ��
{
	int f, w, s, c;

	f = getLocation(currentLocation, farmer);
	w = getLocation(currentLocation, wolf);
	s = getLocation(currentLocation, sheep);
	c = getLocation(currentLocation, cabbage);
	if (f != w && w == s) //��ũ�򲻺�����һ�࣬����ȴ������һ��
		return 0;
	else if (f != s && s == c) //��ũ�򲻺�����һ�࣬����ȴ�Ͱײ���һ��
		return 0;
	return 1;
}

int printRoute(int route[16], int status)
{
	if (status == 0)
	{
		printf("��ʼ״̬��ũ���ǡ���Ͱײ˶��ںӵ�һ�ࡣ\n");
		return 1;
	}
	printRoute(route, route[status]);
	
	char s[200] = "";
	if ((route[status] & cabbage) == cabbage)
		strcat(s, "�ײ��ںӰ�1��");
	else
		strcat(s, "�ײ��ںӰ�0��");
	if ((route[status] & sheep) == sheep)
		strcat(s, "���ںӰ�1��");
	else
		strcat(s, "���ںӰ�0��");
	if ((route[status] & wolf) == wolf)
		strcat(s, "���ںӰ�1��");
	else
		strcat(s, "���ںӰ�0��");
	if ((route[status] & farmer) == farmer)
		strcat(s, "ũ���ںӰ�1��");
	else
		strcat(s, "ũ���ںӰ�0��");
	printf("%s\n", s);

	return 1;
}

int process(int route[16], int currentLocation) //ũ�����͹���(����)
{
	if (route[15] == -1) //����״̬ 1111��ʮ����15������fwsc���ںӶ԰�
	{
		int mover; //�����ƶ����ĸ�����
		for (mover = 1; mover <= 8; mover <<= 1) //����� mover ֻ�����������1��0001����2��0010����4��0100����8��1000��
		{
			//�������ж�ũ���Ƿ������Ҫ�ƶ�������λ��ͬһ��
			if (((currentLocation & farmer) == 0) == ((currentLocation & mover) == 0))
			{
				int nextLocation = currentLocation ^ (farmer | mover); //Ԥ�ȵó���һ״̬
				if (isSafe(nextLocation) && route[nextLocation] == -1) //�ж���һ״̬�Ƿ�ȫ��������һ״̬�Ƿ���й��ˡ�
				{
					int nextRoute[16]; //�����ٴν���·����������Ϊ·���ж��ֿ��ܣ���һ��·������ֻ����һ�ֿ���
					for (int i = 0; i < 16; i++)
						nextRoute[i] = route[i];
					nextRoute[nextLocation] = currentLocation; //����һ״̬��ȫ��û�н��У�������
					process(nextRoute, nextLocation); //�ݹ������һ����
				}
			}
		}
	}
	else //����������״̬����fwsc�������ˣ�����������
		printRoute(route, 15);

	return 1; //����ķ���ֵû���κ����壬���ҾͲ���void��??
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

