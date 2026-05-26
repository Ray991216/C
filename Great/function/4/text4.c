#include<stdio.h>
int Function();

int main()
{
    printf("这一步在方程之前\n");
    Function();
    printf("这个步骤在方程结束后\n");
    return 0;
}

int Function()
{
    printf("这个步骤是方程");
}