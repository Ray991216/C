/*字符串大小写转换*/
#include<stdio.h>
#include<string.h>

int main()
{
    char text[20],change[20];
int num;
int i=0;

while (1)
{
    printf("输入转换大小的方式(1表示大写，2表示小写，0表示退出)：\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("输入一个字符串:\n");
        scanf("%s",text);
        strcpy(change,text);
        strupr(change);
        printf("转换为大写字符的字符串为：%s\n",change);
    }
    else if (num==2)
    {
        printf("输入一个字符串：\n");
        scanf("%s",text);
        strcpy(change,text);
        strlwr(change);
        printf("转换为小写字母的字符串为：%s\n",change);
    }
    else if (num==0)
    {
        printf("exit");
        break;
    }
    
}
return 0;
}