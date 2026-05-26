/*全局变量v*/
#include<stdio.h>
int Allstoreprice=100;//设定商店的初始价格

/*声明函数*/
void store1prince();
void store2prince();
void store3prince();
void changeprince();

int main()
{
    /*先显示价格改变前所有连锁店的价格*/
    printf("改变前的初始价格：%d\n",Allstoreprice);
    store1prince();
    store2prince();
    store3prince();
    /*调用函数，改变价格*/
    changeprince();
    printf("改变后的价格为：%d\n",Allstoreprice);
    store1prince();
    store2prince();
    store3prince();
    return 0;
}
void store1prince()
{
    printf("商店1的价格为：%d\n",Allstoreprice);
}
void store2prince()
{
    printf("商店2的价格为：%d\n",Allstoreprice);
}
void store3prince()
{
    printf("商店3的价格为：%d\n",Allstoreprice);
}
void changeprince()
{
    printf("输入你想改变的价格：\n");
    scanf("%d",&Allstoreprice);
}