#include<stdio.h>

int main()
{
    int i,sum;

    for (sum=0,i=1;i<=100; i+=1)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}