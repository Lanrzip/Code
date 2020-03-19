#include <stdio.h>
#include <stdlib.h>
#define ElementType int
#define MaxSize

typedef struct snode *stack;
struct snode{
    ElementType data[MaxSize];
    int top;
};

void push(stack ptrs, ElementType item)
{
    if (ptrs->top==MaxSize-1){
        printf("栈已满");
        return;
    }else {
        ptrs->data[++(ptrs->top)] = item;
        return;
    }
}

ElementType pop(stack ptrs)
{
    if(ptrs->top==-1){
        printf("栈已空");
        return;
    }else{
        return (ptrs->data[(ptrs->top)--]);
    }
}

struct dstack{
    ElementType data[MaxSize];
    int top1;
    int top2;
}s;
s.top1 = -1;
s.top2 = MaxSize;

void push(struct dstack *ptrs, ElementType item, int tag)
{
    if (ptrs->top2 - ptrs->top1 == 1){
        printf("栈已满");
    }
    if (tag == 1){
        ptrs->data[++(ptrs->top1)] = item;
    }else {
        ptrs->data[--(ptrs->top2)] = item;
    }
}
ElementType pop(struct dstack *ptrs, int tag)
{
    if (tag == 1){
        if (ptrs->top1 == -1){
            printf("栈1空");
            return NULL;
        }else {
            return ptrs->data[(ptrs->top1)--];
        };
    }
    if (tag == 2){
        if (ptrs->top2 == MaxSize){
            printf("栈2空");
            return NULL;
        }else {
            return ptrs->data[(ptrs->top2)++];
        };
    }
}