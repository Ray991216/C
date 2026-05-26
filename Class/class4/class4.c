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
    printf("改进欧拉\n");
    while (x<=1)
    {
        k1=f(x,y);
        k2=f(x+h,y+h*k1);
        x=x+h;
        y=y+h*(k1+k2)/2;
        printf("x=%.1f,y=%.6f\n",x,y);
    }
    
    
    return 0;
}
/*改进欧拉*/