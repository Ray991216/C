/*求n!*/
#include<stdio.h>
int main()
{
    int n;
    int s;
    int i;
    printf("输入一个数：");
    scanf("%d",&n);

    if (n>=0)
    {
        s=1;
        for (i = 1;i<=n;i++)
        {
            s=s*i;
        }
        printf("输出值为：%d\n",s);
        
    }
    else 
    {
      printf("error");
    }
    
    return 0;

}