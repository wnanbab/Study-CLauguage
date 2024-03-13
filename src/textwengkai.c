#include <stdio.h>
//统计素数求和
int main()
{
    int m,n;
    int i;
    int cnt = 0;
    int sum = 0;
    scanf("%d %d",&m,&n);
    //当m=1时，剔除这个以防出错
    if ( m==1 )
    {
        m=2;
    }
    
    for ( i = m; i <= n; i++)
    {
        int isPrime = 1;
        int k;
        for ( k = 2; k < i; k++)
        {
            if ( i%k == 0)
            {
                isPrime = 0;
                break;
            }
        }
        //判断i是不是素数
        if ( isPrime==1)
        {
            cnt++;
            sum+=i;
        }
        
    }
    printf("%d %d\n",cnt,sum);
    return 0;
}