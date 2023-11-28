//函数
//void sum(){} 定义无返回值的函数

//调用函数： 函数名（参数值）；

#include <stdio.h>

void sum(int begin,int end);  //函数原型声明

void cheer()
{
    printf("cheer\n");
}


//判断素数
int isPrime(int i){
    int ret = 1;
    for(int k=2;k<i;k++){
        if(i%k == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}


void sum(int begin,int end)
{
    int num = begin + end;
    printf("%d",num);
}
int main()
{
    // cheer();
    // sum(2,3);
    // return 0;

    //求两数之间素数之和
    int m,n;
    int count = 0;
    scanf("%d %d",&m,&n);
    for(int i = m;i <= n;i++){
        if((isPrime(i)) == 1){
            count += i;
        }
    }
    printf("%d",count);
    return 0;
}


