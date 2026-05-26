#include<stdio.h>
int AddTwoNumber(int Num1,int Num2)
{
    int result;
    result=Num1+Num2;
    return result;
}


int main()
{
    
    int Num1,Num2,result;
    printf("输入两个数：\n");
    scanf("%d%d",&Num1,&Num2);
    result=AddTwoNumber(Num1,Num2);
    printf("%d+%d=%d\n",Num1,Num2,result);
    
    return 0;
}

