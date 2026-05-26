#include<stdio.h>
int main()
{

    int iSelection;

    printf("--Menu--\n");
    printf("1=Load\n");
    printf("2=Save\n");
    printf("3=Open\n");
    printf("other=quit\n");
    printf("enter selection\n");
    scanf("%d",&iSelection);

    if (iSelection==1)
    {
        printf("Processing Load\n");
    }
    else if (iSelection==2)
    {
        printf("Processing Save\n");
    }
    else if (iSelection==3)
    {
        printf("Processing Open\n");
    }
    else
    {
        printf("processing Quit\n");
    }
    
    return 0;
    
    
}