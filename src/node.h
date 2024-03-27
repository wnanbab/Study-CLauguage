#ifdef _NODE_H_
#define _NODE_H_

typedef struct _node
{
    int value;
    struct _node *next; // 定义一个指针
} Node;
#endif