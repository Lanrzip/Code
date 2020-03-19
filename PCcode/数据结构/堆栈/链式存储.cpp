#include <stdio.h>
#include <stdlib.h>
#define ElementType int

typedef struct snode *stack;
struct snode
{
    ElementType data;
    struct snode *next;
};

stack CreatStack()
{
    stack s;
    s = (stack)malloc(sizeof(struct snode));
    s->next = NULL;
    return s;
}

int IsEmpty(stack s)
{
    return (s->next == NULL);
}

void Push(ElementType item, stack s)
{
    struct snode *tmpcell;
    tmpcell = (struct snode*)malloc(sizeof(struct snode));
    tmpcell->data = item;
    tmpcell->next = s->next;
    s->next = tmpcell;
}

ElementType Pop(stack s)
{
    struct snode *firstcell;
    ElementType topelem;
    if (s->next == NULL){
        printf("栈空");
    }else {
        firstcell = s->next;
        topelem = firstcell->data;
        s->next = firstcell->next;
        free(firstcell);
        return topelem;
    }
}