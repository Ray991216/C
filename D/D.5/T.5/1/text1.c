#include<stdio.h>

int main()
{
    int i=1;

    while (i!=0)
    {
        printf("-----Menu------\n");
        printf("-----Sell------1\n");
        printf("-----Buy-------2\n");
        printf("-----ShowProduct-------3\n");
        printf("----Out-----0\n");
       
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            printf("你正在商店中购买一些东西\n");
            break;
        case 2:
            printf("你在给客户售卖\n");
            break;
        case 3:
            printf("查看商店\n");
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("错误选项\n");
            break;
        }


    }
    return 0;
}