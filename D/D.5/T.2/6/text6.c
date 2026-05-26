#include<stdio.h>
int main()
{
    int iNum1,iNum2,iNum3,iResult=0;//定义变量，为变量赋值
    iNum1=20;
    iNum2=5;
    iNum3=2;

    iResult=iNum1+iNum2+iNum3;
    printf("结果是：%d\n",iResult);

    iResult=iNum1-iNum2+iNum3;
    printf("结果是：%d\n",iResult);

    return 0;


}