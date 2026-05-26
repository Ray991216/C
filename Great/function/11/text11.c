#include<stdio.h>

void Evaluate( int iArrayName[]);
void Display( int iArrayName[]);

int main()
{
    int iArray[10];

    Evaluate(iArray);
    Display(iArray);
    return 0;
}

void Display( int iArrayName[])

{
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",iArrayName[i]);
    }
    
}

void Evaluate(int iArrayName[])
{
    int i;
    for (i=0;i<10;i++)
    {
        iArrayName[i]=i;
    }
    
}
//可变长度数组作为函数参数