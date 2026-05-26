#include <stdio.h>
#include <math.h>

// 定义函数f(x)
double f(double x)
{
    return x * x * x* x - x-10;
}

// 二分法求解函数f(x)的根
double bisection(double a, double b, double tol)
{
    int iter = 0; // 迭代次数
    double c;     // 中点

    // 检查区间[a, b]是否有效
    if (f(a) * f(b) >= 0) {
        printf("二分法失败：f(a) 和 f(b) 同号，区间可能不包含根。\n");
        return NAN; // 返回一个无效值
    }

    // 二分法迭代
    while ((b - a) / 2.0 > tol) {
        c = (a + b) / 2.0; // 计算中点
        if (f(c) == 0) {
            printf("在第 %d 次迭代中找到精确根: %.10f\n", iter, c);
            return c;
        } else if (f(a) * f(c) < 0) {
            b = c; // 根在左半区间
        } else {
            a = c; // 根在右半区间
        }
        iter++;
    }

    // 返回近似根
    printf("经过 %d 次迭代，根的近似值为: %.10f\n", iter, c);
    return c;
}

int main() {
    double a, b, tol;

    // 输入区间[a, b]和容差tol
    printf("请输入区间 [a, b]：");
    scanf("%lf %lf", &a, &b);
    printf("请输入容差 tol：");
    scanf("%lf", &tol);

    // 调用二分法求解
    double root = bisection(a, b, tol);

    if (!isnan(root)) {
        printf("函数 f(x) 在区间 [%.2f, %.2f] 内的根为：%.10f\n", a, b, root);
    }

    return 0;
}

 