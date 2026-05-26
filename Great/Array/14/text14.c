/*字符串连接*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    printf("输入目的字符串：\n");
    gets(str1);
    printf("输入源字符串：\n");
    gets(str2);

    printf("输出目的字符串：\n");
    puts(str1);
    printf("输出源字符串：\n");
    puts(str2);
    strcat(str1,str2);
    printf("调用syrcat函数进行字符串连接：\n");
    printf("字符串连接后的的目的字符串：\n");
    puts(str1);
    return 0;
}