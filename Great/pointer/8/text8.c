/*计算数组中奇数的和*/
#include<stdio.h>

void Sum(int *p,int n)
{
    int i,sum=0;
    printf("奇数是：\n");
    for (i=0;i<10;i++)
    {
        if (*(p+i)%2!=0)
        {
           printf("%5d",*(p+i));
           sum=sum+*(p+i);
        }
        
    }
    printf("\n");
    printf("sum:%d\n",sum);
}
int main()
{
    int *pointer,a[10],i;
    pointer=a;
    printf("请输入：\n");
    int count=10;
   for ( i = 0; i < count; i++)
   {
    scanf("%d",&a[i]);
   }
   
    Sum(pointer,10);
    return 0;
}