#include<stdio.h>

int main()
{int e,f,g,i=0,b,c,d;
while(scanf("%c%c%c",&e,&f,&g)!=EOF)
    {if(e>f) {if(f>g)b=e,c=f,d=g;
                          else {if  (e>g)b=e,c=g,d=f;
                                else           b=g,c=e,d=f;
                                }  
                    }
            else   {if(e>g)b=f,c=e,d=g;
                          else{if(g>f)b=g,c=f,d=e;
                                else        b=f,c=g,d=e;}
                    }
    printf("%c\n %c\n %c\n",d,c,b);               
    }
}
