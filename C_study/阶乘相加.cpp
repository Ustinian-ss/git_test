#include <stdio.h>

#define NUM 20  // 20 是你要逐渐求的最大阶乘，可以改

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
    printf("1~20每个数字阶乘总和为:%lf\n", q);
    return 0;
}

