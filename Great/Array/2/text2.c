//初始化一维数组
#include<stdio.h>

int main()
{
    int index;
    int iArray[6]={0,1,2,3,4,5};

    for (index=0;index<6;index+=2)//隔位输出数组中的元素
    {
       printf("%d\n",iArray[index]);
    }
    return 0;
}