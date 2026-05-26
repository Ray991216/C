/*判断一个数是否为偶数*/
#include<stdio.h>
int main()
{
    /*定义变量*/
    int i;
    printf("输入一个整数:");
    scanf("%d",&i);

    if (i%2==0)
    {
        printf("这是偶数");
    }
    else 
    {
       printf("这不是偶数");
    }
    
    return 0;

}