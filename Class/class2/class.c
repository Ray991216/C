#include<stdio.h>
    double f(double x,double y)
    {
        return y-2*x/y;
    }
 
int main()
{
    double x=0;
    double y=1;
    double h=0.1;
    double k1,k2,k3,k4;

    while (x<=1)
    {
        k1=f(x,y);
        k2=f(x+0.5*h,y+0.5*h*k1);
        k3=f(x+0.5*h,y+0.5*h*k2);
        k4=f(x+h,y+h*k3);
        y=y+h*(k1+2*k2+2*k3+k4)/6;
        x=x+h;
        printf("x=%.1f   y=%.10f\n",x,y);
    }
    return 0;
}

/*龙格--库塔求解数值方程*/ 