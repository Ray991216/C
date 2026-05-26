#include<stdio.h>
void Drinkmilk(char*Bottle);

int main()
{
    char Poke[]="";
    printf("Mother wanna give the baby:");
    scanf("%s",&Poke);
    Drinkmilk(Poke);
    return 0;
}

void Drinkmilk(char*Bottle)
{
    printf("the baby drink the %s\n",Bottle);
}