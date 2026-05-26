/*函数的嵌套调用*/
#include <stdio.h>

void CEO();
void Manager();
void AssistantManager();
void Clerk();

int main() 
{
    CEO();
    return 0;
}

void CEO()
{
    printf("CEO's working is telling Mangeager\n");
    Manager();
}

void Manager()
{
    printf("Manager's working is telling AssistantManager\n");
    AssistantManager();
}

void AssistantManager()
{
    printf("AssistantManager's working is telling Clerk\n");
    Clerk();
}
void Clerk()
{
    printf("Clerk's working is writing\n");
}
