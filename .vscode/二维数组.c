#include<stdio.h>

int main()
{
    int i;
    int j;
    int a[3][5];
    int b[3][5]={};
    printf("%d\n",b);
    for(int i =0;i<3;i++){
        for(j =0;j<5;j++){
            a[i][j] = i*j; 
        }
    }
    
    for(i =0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

