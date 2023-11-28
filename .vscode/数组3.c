#include<stdio.h>

//构造素数表
int main(){
    const int maxNumber = 25;
    int isPrime[maxNumber];
    int i;
    int x;
    for(i = 0;i<maxNumber;i++){
        isPrime[i]=1;
    }
    for(x =2;x<maxNumber;x++){
        if(isPrime[x] ){
            //数组中2的倍数都设为零,也可以写成if (isPrime[i] == 1)
            for(i=2;i*x<maxNumber;i++){   
                isPrime[i*x]=0;
            }
        }
    }
    for(i=2;i<maxNumber;i++){
        if(isPrime[i] ){
            printf("%d\t",i);
        }
    }
    printf("\n");
    return 0;

}

//判断素数
// int isPrime(int x)
// {
//     int ret= 1;
//     if(x==1) return 0;
//     for(int i=2;i<x;i++){
//         if(x%i == 0){
//             ret = 0;
//             break;

//         }
//     }
//     return ret;

// }

//构造素数表

