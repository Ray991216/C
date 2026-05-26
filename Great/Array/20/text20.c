#include <stdio.h>

// 自定义字符串复制函数
void my_strcpy(char dest[], char src[])
 {
    int i = 0;
    // 循环复制字符，直到遇到源字符串的结束符
    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    // 在目标字符串末尾添加结束符
    dest[i] = '\0';
}

int main() 
{
    char source[] = "Hello, World!";
    char destination[100];

    // 调用自定义的字符串复制函数
    my_strcpy(destination, source);

    // 输出复制后的字符串
    printf("复制后的字符串是: %s\n", destination);

    return 0;
}
//作业8.9.1