#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define count 1000000

int main()
{
    int step = 0;
    int x = 0;
    int y = 0;
    srand(time(0));
    for (step = 0; step < count; step++)
    {
        int direction = rand() % 4;
        switch (direction)
        {
        case 0:
        if(x+1<=10)
            x++;
            break;
        case 1:
        if(x-1>=-10)
            x--;
            break;  
        case 2:
        if(y+1<=10)
            y++;
            break;  
        case 3:
        if(y-1>=-10)
            y--;
            break;
        default:
            break;
        }
    }
printf("(%d,%d)",x,y);
    return 0;
}