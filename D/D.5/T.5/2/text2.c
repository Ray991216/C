#include<stdio.h>

int main()
{
    int i=0;
    int Sum=0;

    do
    {
        Sum=Sum+i;
        i++;
    } while (i<=100);
    printf("结果是：%d\n",Sum);
    return 0;
    
}