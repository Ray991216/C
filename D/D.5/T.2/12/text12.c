#include<stdio.h>

int main()
{
    int a;
    printf("输入a的值：\n");
    scanf("%d",&a);
    a+=a*=a/=a-6;
    printf("结果为%d",a);
    return 0;
}
/*作业4.10.1*/