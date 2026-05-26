#include <stdio.h>
#include <math.h>

// 线性插值函数
double linear_interpolation(double x, double x0, double f0, double x1, double f1) {
    return f0 * (x - x1) / (x0 - x1) + f1 * (x - x0) / (x1 - x0);
}

int main() {
    // 定义圆周率
    const double PI = acos(-1);

    // 将角度转换为弧度
    double x = 50 * PI / 180;  // 50 度转换为弧度
    double x0 = 45 * PI / 180; // 45 度转换为弧度
    double x1 = 60 * PI / 180; // 60 度转换为弧度

    // 已知的正弦值
    double f0 = sin(x0);
    double f1 = sin(x1);

    // 进行线性插值
    double result = linear_interpolation(x, x0, f0, x1, f1);

    // 输出结果
    printf("使用一次插值计算的 sin(50°) 的近似值为: %.6f\n", result);
    printf("使用 math.h 库中 sin 函数计算的 sin(50°) 的值为: %.6f\n", sin(x));

    return 0;
}