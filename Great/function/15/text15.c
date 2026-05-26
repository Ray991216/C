/*内部函数的使用*/
#include<stdio.h>

static char* GetString(char*pString)
{
    return pString;
}

static void ShowString(char*pString)
{
    printf("%s\n", pString);
}

int main()
{
    char*pMyString;
    pMyString=GetString("Hello, World!");
    ShowString(pMyString);
    return 0;
}