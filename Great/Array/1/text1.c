//使用数组保存数据
#include<stdio.h>
int main()
{
    int iArray[5],index,temp;//定义数组及变量为基本类型
    printf("请输入一个数组\n");

    for (index=0;index<5;index++)//逐个输入数组元素
    {
       scanf("%d",&iArray[index]);
    }
    
    printf("起始数组是：\n");
    for (index=0;index<5;index++)//显示数组中的元素
    {
        printf("%5d",iArray[index]);
    }
    printf("\n");

    for (index=0;index<2;index++)//将数组中的元素前后互换
    {
        temp=iArray[index];
        iArray[index]=iArray[4-index];
        iArray[4-index]=temp;
    }
    printf("现在数组是：\n");
    for (index=0;index<5;index++)//将转换后的数组再次输出
    {
       printf("%5d",iArray[index]);
    }
    printf("\n");
    return 0;
}