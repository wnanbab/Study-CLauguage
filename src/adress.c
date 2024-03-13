#include<stdio.h>

int main(){
    //&取地址
    /*
    不能对变量取地址
    &（i++) ..
    */

    int i = 0;
    int p;
    p =(int)&i;
    printf("0x%x\n",p);  //16进制表示地址
    printf("%p\n",&i);
    printf("\n");

    int a[10]; 
    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);


    return 0;
}