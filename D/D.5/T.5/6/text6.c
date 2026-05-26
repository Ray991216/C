#include<stdio.h>

int main()
{
    int n,sum;

    for ( sum=0,n=1; n<=50; n++)
    {
        int b=2*n;
        sum=sum+b;
    }
    printf("%d",sum);
    return 0;
}
//求1-100以内的偶数和