#include <stdio.h>

#define NUM 20  // 20 ����Ҫ��������׳ˣ����Ը�

int main()

{
    int m, n ;
    double  q=0 ;
    for (m = 1; m <= NUM; m++)
    {
        int p = 1 ;
        for (n = m; n > 0; n--)
        {
            p *= n;  //p = p *n ;
        }
            q += p;  //q = q +p ;
    }
    printf("1~20ÿ�����ֽ׳��ܺ�Ϊ:%lf\n", q);
    return 0;
}

