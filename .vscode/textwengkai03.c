//sizeof
#include <stdio.h>
#include <stdbool.h>  //之后可以使用bool类型
int main(){
    int a;
    a = 6;
    printf("%ld\n",sizeof(int));
    printf("%ld\n",sizeof(double));
    printf("%ld\n",sizeof(long long));
    printf("%ld\n",sizeof(char));
    printf("%ld\n",sizeof(short));

    //条件运算符
    int count = 5;
    count = (count>20) ? count -10:count + 10;

}

