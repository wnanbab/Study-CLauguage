//猜数游戏
#include <stdio.h>
int main()
{
    int number,n;   //猜的数字和次数
    int inp;
    int finished = 0;
    int cnt = 0;
    scanf("%d %d",&number,&n);
    do
    {
        scanf("%d",&inp);
        cnt++;  //猜了一次
        if ( inp <0)
        {
            printf("Game Over\n");
            finished = 1;
        }else if ( inp>number)
        {
            printf("Too big\n");
        }else if ( inp<number)
        {
            printf("Too small\n");
        }else{
            if ( cnt==1)
            {
                printf("Bingon\n");
            }else if( cnt <=3){
                printf("Lucky You\n");
            }else{
                printf("Good Guess/n");
            }
            finished=1;
        }
        if ( cnt==n)
        {
            if ( !finished )
            {
                printf("Game over\n");
                finished = 1;
            }
        }
    } while (!finished);
    return 0;
}