#include<stdio.h>
static x=3;
//定义函数计算
int c()
{
    return x*x*x;
}
int main()
{
    int result=c();
    printf("%d\n",result);
    return 0;
}
//作业3.10.3