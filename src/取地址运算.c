#include <stdio.h>

int main() {
    // int a;
    // a = 6;
    // printf("sizeof(int)=%d\n",sizeof(int));  //4�ֽڣ�32����
    // printf("sizeof(a)=%d\n",sizeof(a));

    //&�������ȡ(����)�ĵ�ַ,����ȡû�е�ַ��
    // int i = 0;
    // int p;
    int a[10];

    // printf("0x%x\n",&i); //16����
    // printf("%p\n",&i);  //��ַ��ʽ��ʾ
    // printf("%p\n",&p);

    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);

    return 0;
}