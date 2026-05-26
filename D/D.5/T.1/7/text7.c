/*求a和b的最大公约数*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("输入a\n");
    scanf("%d",&a);
    printf("输入b\n");
    scanf("%d",&b);

    if (a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    /*初始化c！！*/
    c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;

    }
    printf("%d",b);
    return 0;
}