#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
    int value;
    struct _node *next;   
} Node;

int main()
{
    Node *head = NULL;
    int number;
    do
    {
        scanf("%d",&number);
        if (number != -1)
        {

            //加入链表
            Node *p = (Node*)malloc(sizeof(Node));
            (*p).value = number;
            p->next = NULL;
            //找到最后那一个接上
            Node *last =head;
            //先判断last是不是NULL
            if (last)
            {
                while (last->next){
                    last = last -> next;
                }
                last -> next = p;
            }else{
                head = p;
            }
        }
    } while ( number != -1);
    return 0;
}


int main()  
{  
    int m,n,count,t,j,x,sum;  
    scanf("%d%d",&m,&n);  
    count=0;  
    if(m>n)  
    { //应该是输入小和大的两个数，如果顺序相反则调换两数  
        t=m;  
        m=n;  
        n=t;  
    }  
    for(j=m; j<=n; j++)  
    { //遍历给定范围，判断是否为完数s  
        sum=0;  
        for(x=1; x<=j/2; x++)  
        {   //从1到该数一半开始循环判断  
            if(j%x==0) sum+=x;  //可以整除，累积求和  
        }  
        if(sum==j) count++;  //和等于j，则该数为完数,计数+1  
    }  
    printf("%d\n",count); //打印结果
    return 0;  
}