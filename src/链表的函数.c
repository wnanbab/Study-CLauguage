#include <stdio.h>
#include "node.h"

// typedef struct _node
//     {
//         int value;
//         struct _node *next; // 定义一个指针
//     } Node;

typedef struct _list
{
    Node *head;
} List;

// Node *add(Node **pHead, int number);
Node *add(Node *pList, int number);
int main(int argc, char const *argv[])
{
    int number;
    do
    {
        Node *head = NULL;
        List list;
        list.head = NULL;
        scanf("%d", &number);
        if (number != -1)
        {
            head = add(&list, number);
        }
        while (number != -1)
            ;
        return 0;
    }
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