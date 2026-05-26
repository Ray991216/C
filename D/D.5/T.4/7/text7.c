#include<stdio.h>

int main()
{
    int Day=0;
    printf("输入对应的星期\n");
    scanf("%d",&Day);

    switch (Day)
    {
    case 1:
        printf("在公司有个会议\n");
        break;
    case 6:
        printf("和朋友逛街购物");
        break;
    case 7:
        printf("在家陪伴家人");
        break;
    
    default:
        printf("和同事一起工作");
        break;
    }

    return 0;
}