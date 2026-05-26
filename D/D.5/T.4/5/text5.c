#include<stdio.h>

int main()
{
    float fDues,fAmount;
    int iOntime;
    char cChar;

    printf("输入欠款金额:\n");
    scanf("%f",&fDues);
    printf("Ontime?(y/n)\n");
    getchar();
    cChar=getchar();
    iOntime=(cChar=='y')?1:0;
    fAmount=iOntime?fDues:(fDues*1.1);
    printf("总欠款是:%.2f\n",fAmount);
    return 0;
}