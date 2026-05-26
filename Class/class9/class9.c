#include <stdio.h>
#include <math.h>
#define M_PI 3.14
// 定义比例系数
#define k 0.1

// 计算磁阻传感器输出电压的函数
double calculate_voltage(double B, double theta) {
    // 将角度转换为弧度
    double theta_rad = theta * M_PI / 180.0;
    return k * B * cos(theta_rad);
}

int main() {
    // 定义不同的磁感应强度值（单位：mT）
    double B_values[] = {10, 20, 30};
    // 定义磁敏感轴与磁场的夹角（单位：度）
    double theta = 30;

    // 计算并输出不同磁感应强度下的输出电压
    for (int i = 0; i < sizeof(B_values) / sizeof(B_values[0]); i++) {
        double B = B_values[i];
        double U = calculate_voltage(B, theta);
        printf("当磁感应强度 B = %.2f mT，夹角 theta = %.2f 度时，磁阻传感器输出电压 U = %.4f V\n", B, theta, U);
    }

    return 0;
}    