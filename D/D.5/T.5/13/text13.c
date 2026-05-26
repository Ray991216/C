#include<stdio.h>

int main()
{
    int i;
    for ( i = 0; i <=100; i++)
    {
        if (i%3==0)
        {
            
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}//第二种简化思想