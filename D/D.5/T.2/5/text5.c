/*使用算术表达式计算摄氏温度*/
#include<stdio.h>

int main()
{
    int iC,iF;//声明两个变量，表示摄氏度和华氏度
    printf("请输入华氏温度：\n");//显示提示信息
    scanf("%d",&iF);//输入华氏温度
    iC=5*(iF-32)/9;//通过算式表达式进行计算，将结果赋值给摄氏度

    printf("温度是：");
    printf("%d",iC);
    printf("摄氏度\n");
    
    return 0;

}