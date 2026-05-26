#include <stdio.h>

int main() {
    float x, y;
    printf("输入x的值:\n");
    scanf("%f", &x);

    if (x < 1) 
    {
        y = x;
    } 
    else if (x >= 1 && x < 10)//逻辑与,两个表达式都为真时才为真,并执行.
    {
        y = 2 * x - 1;
    } else
    {
        y = 3 * x - 11;
    }

    printf("y的值为:%f\n", y);

    return 0;
}
//6.8.1作业