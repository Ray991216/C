/*使用putchar函数实现字符数据输出*/
#include<stdio.h>

int main()
{
    /*声明变量并赋值*/
    char cChar1,cChar2,cChar3,cChar4;
    cChar1='H';
    cChar2='E';
    cChar3='L';
    cChar4='O';

    /*输出字符变量*/
    putchar(cChar1);
    putchar(cChar2);
    putchar(cChar3);
    putchar(cChar3);
    putchar(cChar4);
    putchar('\n');//输出转义字符

    return 0;
    


}