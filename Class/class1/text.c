#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*sin(x);
}

double t(double a,double b,int n)
{
    double h=(b-a)/n;
    double sum=0.5*(f(a)+f(b));
    for (int i = 1; i < n; i++)
     {
        double x = a + i * h;  
       sum += f(x);
    }
    sum*=h;
    return sum;
}

int main() {
    double a = 0;  // 积分下限
    double b = 1;  // 积分上限
    int n = 1000;  // 区间划分数量

    double result = t(a, b, n);
    printf("梯形法积分结果: %lf\n", result);

    return 0;
}