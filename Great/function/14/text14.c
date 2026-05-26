/*函数的递归调用*/
#include<stdio.h>

void DisplayNames(char**cNameAarray);

char* cNames[] = {"John", "David", "Alice", "Bob", "Eva","end"};

int main()
{
    DisplayNames(cNames);
    return 0;
}

void DisplayNames(char**cNameArray)
{
    if(*cNameArray =="end")
    {
        return;
    }
    else
    {

        DisplayNames(cNameArray + 1);
        printf("%s\n", *cNameArray);
    }
}
