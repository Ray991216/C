/*将小写字符转换为大写*/
#include<stdio.h>

int main()
{
    char B;
    char S;

    puts("输入字符");
    S=getchar();
    puts("得到的是");
    B=S-32;
    printf("%c\n",B);

    return 0;
}
//大写字符与小写字符相差的ASCII码值为32