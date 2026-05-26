//强制类型转换
#include<stdio.h>

int main()
{
    char cChar;
    short iShort;
    int ilnt;
    float fFloat=70000;

    /*强制转换赋值*/
    cChar=(char)fFloat;
    iShort=(short)fFloat;
    ilnt=(int)fFloat;

    printf("char:%c\n",cChar);
    printf("short:%ld\n",iShort);
    printf("int:%d\n",ilnt);
    printf("float:%f\n",fFloat);

    return 0;
}