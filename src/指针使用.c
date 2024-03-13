/*
指针的使用
*/

#include<stdio.h>

//应用场景一：交换两个变量的值
//应用场景二：返回多个值      （返回值只能返回一个）
//函数返回的值不属于有效范围内的值来表示出错


int divided(int a,int b,int *result)  //结果用result返回，同时也可返回一个值代表不成功
{
    int ret = 1;
    if (b == 0) ret = 0;
    else{
        *result = a/b;
    }
    return ret;
}

void swap(int *pa,int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void minmax(int a[],int length,int *min,int *max)
{
    int i = 0;
    *min=*max=a[0];
    for ( i = 0; i < length; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max=a[i];
        }
    }
}






