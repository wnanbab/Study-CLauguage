#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum = 0;
    int i =1;
    LOOP:if(i <=10)
    {
        sum += i;
        i ++;
        goto LOOP;
    }
    printf("sum=%d\n",sum);
    system("pause");
}