#include<stdio.h>
int main()
{
    int iNum1,iNum2,iNum3;
    iNum1=3;
    iNum2=7;
    
    printf("第一个数:%d\n",iNum1);
    printf("第二个数:%d\n",iNum2);

    iNum3=iNum1+10;
    printf("第一个数加10是:%d\n",iNum3);

    iNum3=iNum2+10;
    printf("第二个数加10是:%d\n",iNum3);

    iNum3=iNum1+iNum2;
    printf("两数之和:%d\n",iNum3);

    return 0;
}