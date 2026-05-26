#include<stdio.h>

void Move();//声明搬运函数
void Build();//声明建造函数
void Paint();//声明粉刷函数

int main()
{
    Move();//执行搬运函数
    Build();//执行建造函数
    Paint();//执行粉刷函数

    return 0;

}
/*/////////////////////////////////////////////////////////////*/
/*                             执行搬运功能                     */
void Move()
{
    printf("this function can move materia\n");
}
/*/////////////////////////////////////////////////////////////*/
/*                             执行搬建造功能                     */
void Build()
{
    printf("this function can build a building\n");
}
/*/////////////////////////////////////////////////////////////*/
/*                             执行粉刷功能                     */
void Paint()
{
    printf("this function can paint cloth\n");
}