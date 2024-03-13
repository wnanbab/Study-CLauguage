#include<stdio.h>
/*
指针可以是const
指的变量可以是const
*/
int main()
{
    //指针是const
    int *const q=&i;     //地址(q)不能变，值（*q）可以变
    *q=26  //ok
    q++;  //err

    //值是const
    const int *q =&i;
    *p=26; //err     //地址可变，值不能改
    i =26; //ok
    p = &j ;//ok


    int i;
    //看*是在const前面还是后面
    const int * p1 = &i;  //值不能变;
    int const* p2 = &i;
    int * const p3 = &i;  //指针不能该;地址不能变

    //const数组
    const int a[]={1,2,3,4,5,6};

    //保护数组不被修改
    int sum(const ina a[],..){}



}