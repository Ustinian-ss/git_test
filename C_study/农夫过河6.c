#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define N 15

int a[N][4];

int b[N];

char *name[]=

{

" ",

"and wolf",

"and goat",

"and cabbage"

};

int search(int Step)

{

int i;

/*�����ֲ�����ʹ��ֵ��Ϊ1����������������ع鲽��*/

if(a[Step][0]+a[Step][1]+a[Step][2]+a[Step][3] == 4)

{

for(i=0; i<=Step; i++) /*�ܹ����������ͬ�ķ���*/

{

printf("east: ");

if(a[i][0] == 0)

printf("wolf ");

if(a[i][1] == 0)

printf("goat ");

if(a[i][2] == 0)

printf("cabbage ");

if(a[i][3] == 0)

printf("farmer ");

if(a[i][0] && a[i][1] && a[i][2] && a[i][3])

printf("\n one");

printf(" ");

printf("west: ");

if(a[i][0] == 1)

printf("wolf ");

if(a[i][1] == 1)

printf("goat ");

if(a[i][2] == 1)

printf("cabbage ");

if(a[i][3] == 1)

printf("farmer ");

if(!(a[i][0] || a[i][1] || a[i][2] || a[i][3]))

printf("\n one");

printf("\n\n\n");

if(i<Step)

printf(" the %d time\n",i+1);

if(i>0 && i<Step)

{

if(a[i][3] == 0) /*ũ���ڱ���*/

{

printf(" -----> farmer ");

printf("%s\n", name[b[i] + 1]);

}

else /*ũ���ڶ԰�*/

{

printf(" <----- farmer ");

printf("%s\n", name[b[i] + 1]);

}

}

}

printf("\n\n\n\n");

return 0;

}

for(i=0; i<Step; i++)

{

if(memcmp(a[i],a[Step],16) == 0) /*���ò�����ǰ������ͬ��ȡ������*/

{

return 0;

}

}

/*�����ũ����һ����Ǻ��������Ͱײ���һ�飬��ȡ������*/

if(a[Step][1]!=a[Step][3] && (a[Step][2] == a[Step][1] || a[Step][0] == a[Step][1]))

{

return 0;

}

/*�ݹ飬�Ӵ���һ�ֶ��￪ʼ��������ѭ����ͬʱ�޶��ݹ�Ľ���*/

for(i=-1; i<=2; i++)

{

b[Step]=i;

memcpy(a[Step+1], a[Step], 16); /*������һ��״̬��������һ���ƶ�*/

a[Step+1][3]=1-a[Step+1][3]; /*ũ���ȥ���߻���*/

if(i == -1)

{

search(Step+1); /*���е�һ��*/

}

else

if(a[Step][i] == a[Step][3]) /*��������ũ��ͬ��������*/

{

a[Step+1][i]=a[Step+1][3]; /*���ظ���*/

search(Step+1); /*������һ��*/

}

}

return 0;

}

int main()

{

printf("\n\n ũ��������⣬����������£�\n\n\n");

search(0);

return 0;

}


