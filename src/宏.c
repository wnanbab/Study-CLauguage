//编译预处理指令  ：#
#include<stdio.h>

//定义了一个宏
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI

int main()
{
    //const double PI = 3.14159;
    printf("%f\n",2*PI*3.0);
    printf(FORMAT,PI2*3.0);
    return 0;
}