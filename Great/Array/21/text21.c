#include <stdio.h>

// 冒泡排序函数，对总成绩数组从高到低排序
void bubbleSort(float scores[], int n) 
{
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (scores[j] < scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    float zhiYu[12], deYu[12], tiYu[12], total[12];
    int i;

    // 输入12名同学的各项成绩并计算总成绩
    for (i = 0; i < 12; i++) 
    {
        printf("请输入第 %d 名同学的智育成绩: ", i + 1);
        scanf("%f", &zhiYu[i]);
        printf("请输入第 %d 名同学的德育成绩: ", i + 1);
        scanf("%f", &deYu[i]);
        printf("请输入第 %d 名同学的体育成绩: ", i + 1);
        scanf("%f", &tiYu[i]);
        total[i] = zhiYu[i] * 0.6 + deYu[i] * 0.3 + tiYu[i] * 0.1;
    }

    // 对总成绩数组进行排序
    bubbleSort(total, 12);

    // 输出排名结果
    printf("排名结果:\n");
    for (i = 0; i < 12; i++)
    {
        printf("第 %d 名，总成绩: %.2f\n", i + 1, total[i]);
    }

    return 0;
}
//作业8.9.2