//已知长方体的高，计算体积
#include<stdio.h>
#define Height 10//定义常量
int calculate(int Long,int Width);//使用函数声明
int main()//主函数声明
{
    int m_Long;//定义整型变量，表示长度
    int m_Width;
    int result;//定义整型变量，表示体积

    printf("长方形的高度为:%\n",Height);//显示提示

    printf("请输入长度\n");//显示提示
    scanf("%d",&m_Long);//输入长方体的长度

    printf("请输入宽度\n");//显示提示
    scanf("%d",&m_Width);//输入长方体的宽度

    result=calculate(m_Long,m_Width);//调用函数，计算体积
    printf("长方体的体积是:");//显示提示
    printf("%d\n",result);//输出体积大小
    return 0;//返回整型0
}

    int calculate(int Long,int Width)//定义计算体积函数
{
    int result=Long*Width*Height;//具体计算体积
    return result;//将计算体积结果返回result
}