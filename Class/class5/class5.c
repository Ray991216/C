#include<stdio.h>

double f(double x,double y)
{
    return 1+y*y+x*x*x;
}
int main()
{
    double x=0;
    double y=0,h=0.1;
    double k1,k2,k3,k4;

    while (x<=1)
    {
        k1=f(x,y);
        k2=f(x+h/2,y+0.5*h*k1);
        k3=f(x+h/2,y+0.5*h*k2);
        k4=f(x+h,y+h*k3);
        y=y+h*(k1+2*k2+2*k3+k4)/6;
        x=x+h;
        printf("x=%.1f,y=%.6f\n",x,y);
    }
    return 0;
}
/*龙格库塔*/