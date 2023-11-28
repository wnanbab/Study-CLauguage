#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             printf("%d*%d=%d ",i,j,i*j);
            
//         }
//         printf("%d\n");
//     }
// }

// int main()
// {
//     int x;
//     for( x = 2; x< 100; x++)
//     {
//         int i;
//         int isPrime=1;
//         for ( i = 2; i < x; i++)
//         {
//             if (x % i == 0)
//             {
//                 isPrime=0;
//                 break;
//             } 
//         }
//         if (isPrime == 1)
//         {
//             printf("%d",x);
//         }
//     }
//     printf("/n");
//     return 0;
// }

int main()
{
    int x;

    x=12345;
    int t =0;
    do
    {
        int d = 0;
        d = x%10;
        t = t*10+d;
        x /=10;
    } while (x>0);
    printf("x=%d,t=%d\n",x,t);
    x = 12345;
    do
    {
        int d = x%10;
        printf("%d",d);
        if (x>10)
        {
            printf(" ");
        }
        x /=10;
    } while (x>0);
    printf("\n");
    return 0;
}