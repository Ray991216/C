#include<stdio.h>
int main()
{
    int i,a[10],*p1,**p2,n=0;
    printf("请输入:\n");
    for ( i = 0; i <10; i++)
    scanf("%d",&a[i]);
    p1=a;
    p2=&p1;
    printf("数组a是:");
    for (i=0;i<10;i++)
    {
       if (*(*p2+i)%2==0)
       {
        printf("%5d",*(*p2+i));
        n++;
       }
       
    }
    printf("\n");
    printf("有%d个偶数",n);
    return 0;
}