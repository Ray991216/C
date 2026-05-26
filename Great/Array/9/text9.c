#include<stdio.h>

int main()
{
    int i,j;
    int a[10];
    int temp;
    int pos;
    printf("为数组元素赋值\n");
    /*输入数组元素的值*/
    for (i-0;i<10;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    /*从小到大排序*/
    for (i=0;i<9;i++)
    {
      temp=a[i];
      pos=i;
      for (j=i+1;j<10;j++)
      {
       if (a[j]<temp)
       {
        temp=a[j];
        pos=j;
       }
       
      }
      a[pos]=a[i];
      a[i]=temp;
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
/*选择法排序*/