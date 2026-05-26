    #include<stdio.h>

    int main()
    {
        float pai=3.14f;
        float A;
        float R;

        puts("输入半径R：");
        scanf("%f",&R);

        A=R*R*pai;
        printf("面积为：%.2f\n",A);

        return 0;

    }