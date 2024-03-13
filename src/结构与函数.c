#include <stdio.h>
#include <stdbool.h>

/*
struct date{
    int month;
} myday ;

struct date *p = &myday;

(*p).month = 12;
p->month = 12;
*/

struct date
{
    int day;
    int month;
    int year;
};

//结构可以作为参数的值传入函数
int numberOfDays(struct date d);
//判断是不是闰年
bool isLeap(struct date d);


int main()
{
    struct date today,tomorrow;

    printf("请输入年日：(mm dd yy)");
    scanf("%i %i %i",&today.year,&today.day,&today.month);

    if (today.day != numberOfDays(today)){
        tomorrow.day = today.day+1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }else if(today.month == 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year+1;
    }else{
        tomorrow.day = 1;
        tomorrow.month = today.month+1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow date is %i-%i-%i.\n",
    tomorrow.year,tomorrow.month,tomorrow.day);
    return 0;
}

int numberOfDays(struct date d)
{
    int days;
    const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(d.month == 2 && isLeap(d)){
        days = 29;
    }else{
        days = daysPerMonth[d.month-1];
    }

    return days;
}


bool isLeap(struct date d){
    bool leap = false;
    if ((d.year%4 == 0 && d.year % 100 != 0) || d.year%400 == 0){
        leap = true;
    }
    return leap;
}