#include<stdio.h>

int main()
{
    int Month=0,Day=0;
    printf("输入月份数\n");
    scanf("%d",&Month);

    switch (Month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        Day=31;
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        Day=30;
        break;

    case 2:
        Day=28;
        break;
    default:
        Day=-1;
        break;
    }
if (Day==-1)
{
   printf("error");
}
else 
{
   printf("得到结果:\n");
   printf("2010.%d has %d days",Month,Day);
}


    return 0;
}