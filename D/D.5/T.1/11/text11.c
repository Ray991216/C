#include<stdio.h>
void AddOne()
{
    auto int iInt=1;
    iInt=iInt+1;
    printf("%d\n",iInt);
}
int main()
{
    printf("第一次调用");
    AddOne();
    printf("第二次调用");
    AddOne();
    return 0;
}
//atuo变量