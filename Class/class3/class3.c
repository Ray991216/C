#include<stdio.h>

double f(double x,double y)
{
    return 1+y*y+x*x*x;
}
int main()
{
    double x=0;
    double y=0,h=0.1;
    double k1,k2;
printf("欧拉法\n");
    while (x<=1)
    {
        y=y+h*f(x,y);
        x=x+h;
        printf("x=%.1f,y=%.6f\n",x,y);
    }
    return 0;
}
/*欧拉*/