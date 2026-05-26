#include<stdio.h>

int main()
{
    int iRow,iColumn;
    char cDiamound[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
    for (iRow = 0; iRow< 5; iRow++)
    {
        for (iColumn=0;iColumn<5;iColumn++)
        {
            printf("%c",cDiamound[iRow][iColumn]);
        }
        printf("\n");
    }
    return 0;
}