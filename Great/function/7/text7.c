#include<stdio.h>

char Show()
{
    int num;
    printf("输入一个数字");
    scanf("%d",&num);
    return num;
}

int main()
{
    char c;
    c=Show();
    printf("%c",c);
    return 0;
}