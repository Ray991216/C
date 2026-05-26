/*三个数中的最小数*/
#include<stdio.h>
int main()

{
    /*定义变量*/
    int x,y,z,min;
    printf("输入三个不同的数字");
    scanf("%d%d%d",&x,&y,&z);

    /*判断大小*/
    min=x;
    if(y<min)
    {
    min=y;
    }
    if (z<min)
    {
        min=z;
    }
    printf("三个数中的最小数：%d\n",min);
    return 0;

}