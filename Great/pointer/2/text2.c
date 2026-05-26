#include<stdio.h>

main()
{
    int *p,q;
    printf("亲输入：");
    scanf("%d",&q);
    p=&q;
    printf("%d\n",*p);
}