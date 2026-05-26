#include<stdio.h>

int main()
{
    int Day;
    int Monday=1,Tuesday=2,Wednesday=3,Thursday=4,Friday=5,Saturday=6,Sunday=7;

    printf("输入今天对应的数字：\n");
    scanf("%d",&Day);

    if (Day>Friday)
    {
        if (Day==Sunday)
        {
            printf("和朋友去超市购物");
        }
        else
        {
            printf("和家人待在家里");
        }
    }
    else
    {
        if (Day==Monday)
        {
           printf("在公司有一个会议");
        }
        else
        {
            printf("和同事一起工作");
        }
        
    }
    return 0;
    
}