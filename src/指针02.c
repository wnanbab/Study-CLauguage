#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void){
    int a[] = {1,2,3,4,5};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min,max);
    return 0;
}

void minmax(int a[],int len,int *min,int *max)
{
    int i = 0;
    *min = *max = a[0];
    for ( i = 1; i < len; i++)
    {
        if ( *min > a[i])
        {
            *min = a[i];
        }

        if (*max < a[i])
        {
            *max = a[i];
        }
    }
}