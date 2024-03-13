#include  <stdio.h>
#include <stdlib.h>
int main()
{
    /* code */
    int i,j,result;
    for (i =9 ; i >=1; i--)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d",i,j,result=i*j);
            printf("\n");
            /* code */
        }
        printf("\n");   
    }
    system("pause");
}
