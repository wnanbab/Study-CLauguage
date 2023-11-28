#include<stdio.h>

//数组学习

int main()
{
    int x;
    int sum = 0;
    int cnt = 0;
    int number[100];  //100个数的数组
    scanf("%d",&x);
    while(x != -1)
    {
        number[cnt] = x;
        cnt ++;
        sum += x;
        scanf("%d",&x);
    }
    if(cnt > 0){
        printf("%f\n",sum/cnt);
        int i;
        for(i = 0;i<cnt;i++)
        {
            if(number[i]>sum/cnt)
            {
                printf("%d\n",number[i]);
            }
        }
    }
    return 0;

}


//计算数的个数
int member(){
    const  int number = 10;
    int x;
    int count[number];
    int i;

    //初始化数组
    for(i=0;i<number;i++){
        count[i] = 0;
    }
    scanf("%d",&x);
    while(x != -1){
        if(x>0 && x <= 9){
            count[x]++;
        }
         scanf("%d",&x);  //循环后继续读入
    } 

    //遍历输出
    for(i = 0;i<number;i++){
        printf("%d:%d\n",i,count[i]);
    }
    
}