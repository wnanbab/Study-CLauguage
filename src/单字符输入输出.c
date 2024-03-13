#include <stdio.h>
#include <string.h>
int main()
{
    //putchar  getchar  返回都是int
    int ch;
    while ((ch = getchar()) !=EOF){
        putchar(ch);
    }
    printf("EOF\n");
    return 0;
}