#include<stdio.h>
int Add(int Num1,int Num2);
int main()
{
    /*定义所需变量*/
    int Num1,Num2,result;
    

    /*显示提示文字*/
    printf("输入加数\n");
    scanf("%d",&Num1);

    printf("继续输入加数\n");
    scanf("%d",&Num2);

    /*调用函数计算体积*/
    result=Add(Num1,Num2);
    printf("计算结果\n");
    printf("%d\n",result);

    return 0;

}
/*定义计算加法函数*/
int Add(int Num1,int Num2)
{
    int result=Num1+Num2;
    return result;
}