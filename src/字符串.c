#include <stdio.h>

#include <string.h>  //有很多处理字符串的函数

/*
c语言的字符串是以字符数组的形态存在的
不能用运算符对数组进行运算
通过遍历数组的方式可遍历字符串
字符串以0结尾
0代表ascii的0
\0代表整数0
\0表示结束，但不是一部分
*/

/*
构造字符串数组
处理用指针（不能修改）
*/

int main()
{
    char *str = "Hello";
    char word[] = "Hello";
    char line[10] = "Hello";  
    //5个字符,占6个字节（还有结尾的0）；会变成一个字符数组长度是6，结尾还有表示结束的0；


    char*s = "Hello World";  //==const char* s
    //s[0] = 'B';  err

    char p[]= "Hello World";
    p[0] = 'B';
    printf("s=%p\n",s);
    printf("p[0]=%c\n",p[0]);

    //字符串输入输出
    char string[8];
    scanf("%s",string);
    printf("string=%s",string);  //读入了一个单词 

    char a[][10] = {
        "Hello",
        "World",
        "sjjhjknkjnjbjk"
    };

    return 0;


}