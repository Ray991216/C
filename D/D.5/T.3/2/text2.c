/*使用getchar函数实现字符数据输入*/
#include<stdio.h>

int main()
{
    char cChar1;
    cChar1=getchar();
    putchar(cChar1);
    putchar('\n');
    getchar();
    putchar(getchar());
    putchar('\n');
    return 0;
}