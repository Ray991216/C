#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    printf("请输入一个正整数: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++)
         {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) 
    {
        printf("%d 是素数。\n", num);
    } 
    else 
    {
        printf("%d 不是素数。\n", num);
    }

    return 0;
}