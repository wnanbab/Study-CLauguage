#include <stdio.h>

int main() {
    // int a;
    // a = 6;
    // printf("sizeof(int)=%d\n",sizeof(int));  //4字节，32比特
    // printf("sizeof(a)=%d\n",sizeof(a));

    //&运算符获取(变量)的地址,不能取没有地址的
    // int i = 0;
    // int p;
    int a[10];

    // printf("0x%x\n",&i); //16进制
    // printf("%p\n",&i);  //地址形式表示
    // printf("%p\n",&p);

    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);

    return 0;
}