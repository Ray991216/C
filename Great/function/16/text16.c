/*外部函数的使用*/
#include <stdio.h>

extern char* GetString(char*pString);/*声明外部函数*/
extern void ShowString(char*pString);/*声明外部函数*/

int main()
{
    char*pMyString;/*定义字符串变量*/
    pMyString=GetString("Hello, World!");/*调用函数为字符串赋值*/
    ShowString(pMyString);/*显示字符串*/
    return 0;
}
extern char*GetString(char*pString)
{
    return pString;
}

extern void ShowString(char*pString)
{
    printf("%s\n", pString);

}