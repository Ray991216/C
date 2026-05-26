#include<stdio.h>

int main()
{
    int i,n=0;
    for ( i = 0; i < 10; i++)
    {
        if (i==5)
        {
            printf("break here\n");
            break;
        }
        n++;
        printf("这个数字是：%d\n",i);
    }
    printf("程序运行次数：%d",n);
 return 0;   
}