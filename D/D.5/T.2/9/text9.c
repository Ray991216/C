#include<stdio.h>

int main()
{
    int iNum1,iNum2;//声明变量并赋值
    iNum1=10;
    iNum2=0;

    printf("1 is True,0 is False\n");//提示信息
    printf("5<iNum1&&iNum2 is %d\n",5<iNum1&&iNum2);//显示“逻辑与”表达式的结果
    printf("5<iNum1||iNum2 is %d\n",5<iNum1||iNum2);//显示“逻辑或”表达式的结果
    iNum2=!!iNum1;//得到iNum1的逻辑值
    printf("iNum2 is %d\n",iNum2);//输出逻辑值
    return 0;
}