#include<stdio.h>
#include<math.h>
#define pi 3.14
double L(double x,double x0,double f0,double x1,double f1)
{
    return f0*(x-x1)/(x0-x1)+f1*(x-x0)/(x1-x0);
}

int main()
{
    double x0=pi/4;
    double f0=sin(x0);
    double x1= pi/3 ;
    double f1=sin(x1);

    double x=50*pi/180;

    double result=L(x,x0,f0,x1,f1);
    printf("%.6f\n",result);
    printf("%.6f",sin(x));
}