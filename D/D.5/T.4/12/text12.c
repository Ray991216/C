#include<stdio.h>
 int main()
 {
    int iSum=0;
    int i=1;

    while (i<=100)
    {
       iSum=iSum+i;
       i++;
    }
    printf("结果是：%d\n",iSum);
    return 0;
 }