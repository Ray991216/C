#include<stdio.h>

int main()
{
    int i;
    int a[10];
    int temp;
    int pos;
    printf("为数组元素赋值:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i=1;i<10;i++)
    {
       temp=a[i];
       pos=i-1;
       while ((pos>=0)&&(temp<a[pos]))
       {
        a[pos+1]=a[pos];
        pos--;
       }
       a[pos+1]=temp;
    }
    for (i=0;i<10;i++)
    {
       printf("%d\t",a[i]);
       if (i==4)
       {
        printf("\n");
       }
       
    }
    return 0;
}
/*插入法排序*/