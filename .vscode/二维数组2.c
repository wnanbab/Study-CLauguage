#include<stdio.h>

//五子棋游戏

int main()
{
    const int size = 3;
    int board[size][size];
    int i,j;
    int num0fx;
    int num0f0;
    int result = -1;  //-1，没人应；1：x赢 ，0：0赢

    //读入矩阵
    for(i=0;i<size;i++){
        for(j = 0;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }

    //检查行
    for(i =0;i<size && result == -1;i++){
        num0f0 = num0fx = 0;
        for(j = 0;j<size;j++){
            if (board[i][j]==1)
            {
                num0fx ++;
            }else{
                num0f0 ++;
            }
        }
        if(num0f0 == size){
            result= 0;
        }else if(num0fx == size){
            result =1;
        }
    }

    //检查列
    if (result == -1)
    {
        for ( j = 0; i <size && result == -1; j++)
        {
            num0f0 =num0fx =0;
            for ( i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                {
                    num0fx ++;
                }else{
                    num0f0;
                }
            }
            if (num0f0 == size)
            {
                result = 0;
            }else if (num0fx == size)
            {
                result = 1;
            }
        }
    }

    //检查对角线
    if (result == -1){
        for ( i = 0; i <size; i++)
        {
            if (board[i][i] == 1)
            {
                num0fx ++;
            }else{
                num0f0 ++;
            }
        }
        if (num0f0 ==size)
        {
            result = 0;
        }else if (num0fx == size)
        {
            result = 1;
        }
    }

    if (result == -1)
    {
        for ( i = 0; i < size; i++)
        {
            if (board[i][size -1 -i] == 1)
            {
                num0fx ++;
            }else{
                num0f0 ++;
            }
        }
        if (num0f0 ==size)
        {
            result = 0;
        }else if(num0fx == size){
            result = 1;
        }
        
    }
    printf("Result:%d\n",result);
    return 0;
}


