#include <stdio.h>


#include<stdlib.h>
//malloc函数



int main()
{
    int number;
    // int a[number];

    //int a[number]
    int* a;
    int i;
    a = (int*)malloc(number*sizeof(int));

    //遍历输入数字
    for ( i = 0; i < number; i++){
        scanf("%d",&a[i]);
    }
//逆序输出
    for ( i = number -1; i >= 0; i--){
        printf("%d",a[i]);
    }

    free(a);   //还回内存，释放


    void *p;
    int cnt = 0;
    while ((p=malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("分配了%d",cnt);
    return 0;

}