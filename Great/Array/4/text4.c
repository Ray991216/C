//用数组保存学生名字
#include<stdio.h>
 int main()
 {
    int index;
    char* Array[5]={"李华","张明","李亮","小红","肖恩"};
    for (index=0;index<5;index++)
    {
        printf("%s\n",Array[index]);
    }
    return 0;
 }
 //char*是指针