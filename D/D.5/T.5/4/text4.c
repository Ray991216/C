//显示随机数
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i;
    for ( i = 0; i < 10; i++)
    {
        srand(i+1);
        printf("随机数：%d is:%d\n",i,rand());
    }
    return 0;
}