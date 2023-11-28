#include<stdio.h>

//在给定数组中找到数据

int search(int key,int a [],int length);

int main()
{
    int a[] = {2,4,6,7,1,3,5,9,11,13,14,12,32}; //初始化

    // {
    //     printf("%d",sizeof(a)/sizeof(a[0]));  //数组个数
    // }

    int x;
    int loc;
    printf("请输入：");
    scanf("%d",&x);  //输入要查的数
    loc = search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc != -1){
        printf("%d在%d位置上",x,loc);
    }else{
        printf("%d不存在",x);
    }
    return 0;
}

int search(int key,int a [],int length)
{
    int ret = -1;
    for(int i = 0;i <length ;i++)
    {
        if(a[i] == key)
        {
            ret = i;
            break;
        }
    }
    return ret;

}