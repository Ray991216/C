#include <stdio.h>

int main()
{
    int *p, *q, a[5], b[5], i;
    p = &a[0];
    q = b;
    printf("请输入数组 a:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("请输入数组 b:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    printf("a is :\n");
    for (i = 0; i < 5; i++)
        printf("%5d", *(p + i));
    printf("\n");
    printf("b is :\n");
    for (i = 0; i < 5; i++)
        printf("%5d", *(q + i));
    printf("\n");
    return 0;
}    