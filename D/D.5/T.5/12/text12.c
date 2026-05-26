#include<stdio.h>

int main()
{
    int n;
    for ( n = 0; n <=100; n++)
    {
       if (n%3!=0)
       {
        printf("%d\n",n);
       }
       if (n==100)
       {
        printf("continue here");
        continue;
       }
    
    }
    return 0;
}//作业7.9.2