#include <stdio.h>
#include <stdlib.h>
float taxifee(int clock,int miles)
{
    float fee;
    if(miles <= 3)
    {
        fee = 14;
        printf("14\n");
    }
    else
    {
        if (clock >= 23 || clock < 5)
        {
            fee =13+(miles-3)*1.2*2.3+1;
            printf("车费为：%f\n",fee);
            /* code */
        }
        else
        {
            fee = 13+1+(miles-3)*2.3;
            printf("车费为：%f\n",fee);
        }
    }
    return fee;
}

int main()
{
    printf("打车的费用是：%.1f\n",taxifee(7,6));
    system("pause");
}

