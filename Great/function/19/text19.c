#include<stdio.h>

float arrveage(int Score[],int L);

int main()
{
    int L=10;
    float result;

    int Score[10]={99,98,89,100,120,128,109,99,100,100};
    result= arrveage(Score,L);
    printf("%.2f",result);
    return 0;
}

float arrveage(int Score[],int L)
{
   float sum=0;
    int i;
    for (i= 0;i<L; i++)
    {
       
       sum +=Score[i];
    }
    return sum/L;
}