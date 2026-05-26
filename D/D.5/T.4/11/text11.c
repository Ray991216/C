#include<stdio.h>

int main()
{
    int a,b,c,max;
    printf("输入任意三个整数\n");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b)?a:b;//先找出a和b中的最大值,并赋值给max
    max=(max>c)?max:c;//ab中的最大值在和c进行比较
    printf("%d\n",max);//最后输出max
    return 0;
}