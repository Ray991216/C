#include<stdio.h>
int main()
{
    int iHoursworded=8;//定义变量，为变量赋初值，表示工作时间
    int iHourlyRate;//声明变量，表示一个小时的薪水
    int iGrossPay;//声明变量，表示得到的工资

    iHourlyRate=13;//为变量赋值
    iGrossPay=iHourlyRate*iHoursworded;//将表达式的结果值赋给变量

    printf("The HoursWorded is: %d\n",iHoursworded);
    printf("The HourlyRate is:%d\n",iHourlyRate);
    printf("The GrossPay is:%d\n",iGrossPay);

    return 0;
}