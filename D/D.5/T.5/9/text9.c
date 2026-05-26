#include<stdio.h>

int main()
{
    int i,n;
    for ( i = 1; i < 10; i++)
    {
        printf("i是:%d\n",i);

        do
        {
            printf("输入一个数字进行选择\n");
            printf("0是结束程序,99是下一个i\n");
            scanf("%d",&n);
            if (n==0)
            {
               goto exit;
            }
            
        } while (n!=99);
        
    }
    exit:
        printf("退出程序");
    return 0;
}