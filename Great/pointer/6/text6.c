#include<stdio.h>

int main()
{
    int i;
    char **p;
    char *month[]={"一月","eryue","sanyue","siyue","wuyue","liuyue","qiyue","bayue","jiuyue","shiyue","shiyiyue","shieryue"};
    
    for (i = 0; i < 12; i++)
    {
        p=month+i;
        printf("%s\n",*p);
    }
    return 0;
}