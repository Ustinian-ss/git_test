#include

#include

#include

#define MAX_STEP 20

//index: 0 - 狼，1－羊，2－菜，3－农夫，value：0－本岸，1－对岸

int a[MAX_STEP][4];

int b[MAX_STEP];

char *name[] =

{undefined

"空手",

"带狼",

"带羊",

"带菜"

};

void search(int iStep)

{undefined

int i;

if (a[iStep][0] + a[iStep][1] + a[iStep][2] + a[iStep][3] == 4)

{undefined

for (i = 0; i < iStep; i++)

{undefined

if (a[i][3] == 0)

{undefined

printf("%s到对岸\n", name[b[i] + 1]);

}

else

{undefined

printf("%s回本岸\n", name[b[i] + 1]);

}

}

printf("\n");

return;

}

for (i = 0; i < iStep; i++)

{undefined

if (memcmp(a[i], a[iStep], sizeof(a[i])) == 0)

{undefined

return;

}

}

if (a[iStep][1] != a[iStep][3] && (a[iStep][2] == a[iStep][1] || a[iStep][0] == a[iStep][1]))

{undefined

return;

}

for (i = -1; i <= 2; i++)

{undefined

b[iStep] = i;

memcpy(a[iStep + 1], a[iStep], sizeof(a[iStep + 1]));

a[iStep + 1][3] = 1 - a[iStep + 1][3];

if (i == -1)

{undefined

search(iStep + 1);

}

else if (a[iStep][i] == a[iStep][3])

{undefined

a[iStep + 1][i] = a[iStep + 1][3];

search(iStep + 1);

}

}

}

int main()

{undefined

search(0);

return 0;

} 
