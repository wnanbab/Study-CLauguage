#include <stdio.h>

int main()
{
    /*
    另一种定义格式定义了两个变量p1,p2
    struct point{
        int x;
        int y;
    }p1, p2;
    
    */
    //声明结构,特殊情况下也可能无名（不想一直用)
    struct  data
    {
        int month;
        int day;
        int year;
    };
//定义了一个today变量，类型是struct date
    struct date today;
    today.month =07;
    today.day = 31;
    today.year = 2014;
    printf("%i-%i-%i",today.year,today.month,today.day);

//结构运算赋值
    p1 = (struct point){5,10}; //相当于p1.x=5;p1.y=10;
    p1.y=10;
    p1 = p2; //相当于p1.x=p2.x;p1.y=p2.y;

//结构指针;必须用运算符&；
    struct  data *pDate = &today;
{
    /* data */
};


    return 0;
}

/*
结构的初始化
struct date{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today = {07,13,2017};
    struct date thismonth = {.month=7,.year=2014};

}


*/