/*求1到100的和*/
#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
for (i=1; i<=100;i++)
{
    sum=sum+i;
}
printf("相加之和:%d\n",sum);//求和之后要有输出！！！
return 0;
}