//多路开关
#include<stdio.h>

int main()
{
    int Day=0;
    printf("请输入星期：\n");
    scanf("%d",&Day);

    switch (Day)
    {
    case 1:
        printf("在公司开会\n");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
         printf("和同事上班\n");
         break;
    case 6:
        printf("和朋友购物\n");
        break;
    case 7:
        printf("和家人一起在家\n");
    default:
        printf("error");
        break;
    }

    return 0;
}