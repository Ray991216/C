/*作业4.10.2*/
#include<stdio.h>

int main()
{
    int i;
    i=6;
    
    i=i++;
    printf("R is:%d\n",i);

    i=i++;
    printf("R is:%d\n",i);

    i=--i;
    printf("R is:%d\n",i);

    i=i--;
    printf("R is:%d\n",i);


    return 0;
}