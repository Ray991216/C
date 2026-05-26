#include<stdio.h>

void Max(int num1,int num2);

int main()
{
    int num1,num2,result;
    printf("输入两个数字判断大小：");
    scanf("%d %d",&num1,&num2);
    Max(num1,num2);
}

 void Max(int num1,int num2)
{
    if (num1>num2)
    {
        printf("%d",num1);
    }
    else
    {
        printf("%d",num2);
    }
}
//作业9.10.1