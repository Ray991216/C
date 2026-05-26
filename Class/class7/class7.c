#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 定义要积分的函数
double f(double x) {
    return x * x+x;  // 这里以 f(x) = x^2 为例
}

// 生成 [a, b] 区间内的随机浮点数
double random_double(double a, double b) {
    return a + (double)rand() / RAND_MAX * (b - a);
}

int main() {
    // 设置随机数种子
    srand((unsigned int)time(NULL));

    // 积分区间
    double a = 0;
    double b = 1;

    // 找到函数在区间 [a, b] 上的一个上界 M
    double M = f(b);

    // 总的随机点数
    int N = 1000000;

    // 落在函数曲线下方的点数
    int N_below = 0;

    // 生成随机点并判断是否在函数曲线下方
    for (int i = 0; i < N; i++) {
        double x = random_double(a, b);
        double y = random_double(0, M);
        if (y <= f(x)) {
            N_below++;
        }
    }

    // 估算积分值
    double integral_estimate = (double)N_below / N * (b - a) * M;

    printf("估算的积分值: %f\n", integral_estimate);

    return 0;
}