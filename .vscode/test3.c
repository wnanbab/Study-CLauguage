#include <stdio.h>
#include <stdlib.h>
int XingCan(int x)   //x形参
{
    return x*2;  //返回主函数
}
int main()
{
    int x = 10;
    printf("x=%d\n",XingCan(x));
    system("pause");
}