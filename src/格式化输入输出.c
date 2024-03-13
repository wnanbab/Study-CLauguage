#include <stdio.h>

/*
*/

int main(int argc ,char const *argv[]){
    printf("%9d\n",123);   //填充9位
    printf("%-9d\n",123);  //-是左对齐
    printf("%+9d\n",123);  //+是强制输出
    printf("%09d\n",123);  //用0填充
    printf("\n");
    printf("%9.2f\n",123.0);  //保留两位小数，一共9位
    printf("%*d\n",6,123);  //一共6位，用123代入d
    printf("\n");

    printf("%hhd\n",(char)12345);  //hh输出单个字节
    printf("\n");
    int num;
    printf("%dty%n\n",12345,&num);
    printf("%d\n",num);

    return 0;
}