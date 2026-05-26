#include<stdio.h>

int main()
{
    char cString[100];
    int index,iWord=1;
    char cBlank;
    gets(cString);
    if (cString=='\0')
    {
        printf("这里没有字符\n");
    }
    else if (cString==' ')
    {
        printf("第一个字符是空格");
    }
    else
    {
        for (index=0;cString[index]!='\0';index++)
        {
            cBlank=cString[index];
            if (cBlank==' ')
            {
                iWord++;
            }
            
        }
        printf("%d\n",iWord);
    }
    return 0;
}