/*获得字符串的长度*/
#include<stdio.h>
#include<string.h>

int main()
{
    char text[50],connect[50];
    int num;

    printf("输入一个字符串：\n");
    scanf("%s",text);
    num=strlen(text);
    printf("字符串的长度为：%d\n",num);
    printf("再输入一个字符串：\n");
    scanf("%s",connect);
    num=strlen(connect);
    printf("字符串的长度为：%d\n",num);
    strcat(text,connect);
    printf("将两个字符串进行连接：%s\n",text);
    num=strlen(text);

    printf("连接后的字符串长度为：%d\n",num);
    return 0;
}