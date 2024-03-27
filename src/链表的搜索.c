#include <stdio.h>
#include "node.h"
/*
遍历函数
*/
// typedef struct _node
//     {
//         int value;
//         struct _node *next; // 定义一个指针
//     } Node;

Node *add(Node *pList, int number);
void print(List *pList);

typedef struct _list
{
    Node *head;
} List;

// Node *add(Node **pHead, int number);

int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = NULL;
    do
    {
        scanf("%d", &number);

        if (number != -1)
        {
            head = add(&list, number);
        }
    } while (number != -1);
    // 遍历链表
    print(&list);
    // looking for number
    scanf("%d", &number);
    Node *p;
    for (p = list.head; p; p = p->next)
    {
        if (p.value == number)
        {
            printf(" found it...");
            isFound = 1;
            break;
        }
    }
    if (!isFound)
    {
        printf("not found...");
    }

    // delete the node
    Node *q;
    for (q = NULL, p = list.head; q = p, p; p = p->next)
    {
        if (p->value == number)
        {
            if (q)
            {
                q->next = p->next; // q必须判定是否不为null
            }
            else
            {
                list.head = p->next;
            }
            free(p);
            break;
        }
    }

    // delete all the list
    for (p = head; p; q = p)
    {
        q = p->next;
        free(p);
    }

    return 0;
}

void print(List *pList)
{
    Node *p;
    for (p = pList.head; p; p = p->next) // p还存在p就能一直循环
    {
        printf("%d\t", p->value);
    }
    printf("\n");
}

// Node *add(Node **pHead, int number)
Node *add(List *pList, int number)
{
    // add to link-list
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    // find the last

    // Node *last = *pHead;
    Node *last = pList->head;

    // 如果last不为null的时候
    if (last)
    {
        while (last->next) // 先遍历到最后一个节点
        {
            last = last->next;
        }
        // attach连上最后的节点
        last->next = p;
    }
    else
    {
        // 如果为空
        pList->head = p;
        // head = p;
    }
}