#include<stdio.h>

int main()
{
    int iV1,iV2,iV3,iR;/*声明变量，使用逗号运算符*/

    /*为变量赋值*/
    iV1=10;
    iV2=43;
    iV3=26;
    iR=0;

    iR=iV1++,--iV2,iV3+4;
    printf("结果是: %d\n",iR);

    iR=(iV1++,--iV2,iV3+4);
    printf("结果是: %d\n",iR);

    return 0;
}
