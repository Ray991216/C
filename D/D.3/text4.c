/*计算n！*/
#include <stdio.h>
int main()
{
    /* 定义所需变量 */
    int i;
    int n;
    int mul;

    printf("请输入n的大小\n");
    scanf("%d", &n);

    mul = 1; // 初始化乘积为1
    for (i = 1; i <= n; i++) // 使用for循环从1到n
    {
        mul = i * mul; // 计算乘积
    }

    printf("1到%d的乘积是：%d\n", n, mul); // 输出结果
    return 0;
}