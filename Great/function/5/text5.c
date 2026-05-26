#include<stdio.h>

int Shownum(int Num1,int Num2);
int main()
{
    int Num1,Num2;
    scanf("%d%d",&Num1,&Num2);
    Shownum(Num1,Num2);
    return 0;
}
int Shownum(int Num1,int Num2)
{
printf("%d %d",Num1,Num2);
}