#include<stdio.h>

int main()
{
    int iSignal;
    printf("红灯是0\n绿灯是1\n黄灯是其他数字\n");
    scanf("%d",&iSignal);

    if (iSignal==1)
    {
        printf("绿灯，汽车可以走");
    }
    else if (iSignal==0)
    {
        printf("红灯，汽车不能走");
    }
    else{
        printf("黄灯，可以准备了停了");
    }

    return 0;
}