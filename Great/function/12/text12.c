//指针作为函数参数
#include<stdio.h>

void Evaluate( int* pPoint);
void Display( int* pPoint);

int main()
{
    int iArray[10];

    Evaluate(iArray);
    Display(iArray);
    return 0;
}

void Display(int* pPoint)
{
    int i;
    for ( i = 0; i < 10; i++)
    {
       printf("%d\n",pPoint[i]);
    }
    
}

void Evaluate(int* pPoint)
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        pPoint[i]=i;
    }
    
}