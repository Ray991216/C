#include<stdio.h>

int main()
{
    int iChinese,iEnglish;
    printf("输入语文分数:\n");
    scanf("%d",&iChinese);
    printf("输入英语分数:\n");
    scanf("%d",&iEnglish);

    if (iChinese<iEnglish)
    {
        printf("英语分数比语文分数高");
    }
    if (iChinese>iEnglish)
    {
        printf("英语分数比语文分数低");
    }
    if (iChinese==iEnglish)
    {
        printf("英语分数等于语文分数");
    }
    
    return 0;
    
    
}