/*使用字符串函数显示信息提示*/;
#include<stdio.h>

int main()
{
    char* Char="I Love China!";

    puts("I Love China!");
    puts("I\0 Love\0 China!");
    puts(Char);
    puts("I Love\0 China!");
    puts(Char);
    return 0;
}