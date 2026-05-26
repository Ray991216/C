/*利用指针输出*/
#include<stdio.h>
main()
{
    int a,b;
    int *ipointer1,*ipointer2;
    scanf("%d%d",&a,&b);
    ipointer1=&a;
    ipointer2=&b;
    printf("%d,%d\n",*ipointer1,*ipointer2);
}