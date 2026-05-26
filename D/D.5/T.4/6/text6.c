#include<stdio.h>
int main()
{
    char cGrade;
    printf("请输入你的等级\n");
    scanf("%c",&cGrade);
    printf("分数大约是：\n");

    switch (cGrade)
    {
    case 'A':
       printf("90-100\n");
       break;
    case'B':
       printf("80-89\n");
       break;
    case'C':
       printf("70-79\n");
       break;
    case'D':
       printf("60-69\n");
       break;
    case'F':
       printf("<60\n");
       break;
    default:
    printf("你输入错了");
        break;
    }
    return 0;
}