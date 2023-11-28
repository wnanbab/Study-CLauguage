#include<stdio.h>


/*
指针就是保存地址的变量

void f(int *p)
int i=0;  f(&i) 调用函数

*/
void f(int *p);
void g(int k);
int main(){
    // int i;
    // int* p = &i;   //p是一个指针，指向i
    // int *p,q;  //p是一个指针，指向int；q是个普通int变量
    // int* p,q;  //p是一个指针，指向int；q是个普通int变量

    int i = 6;
    int *p;
    printf("&p=%p\n",&i);
    f(&i);
    g(i);

}

void f(int *p){
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    *p=26;
}

void g(int k)
{
    printf("k=%d\n",k);
}