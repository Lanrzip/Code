#include <stdio.h>
#include <malloc.h>
#define ElementType int

typedef struct lnode *list;
struct lnode
{
    ElementType data[10];
    int last;
};

list MakeEmpty()
{
    list ptrl;
    ptrl = (list)malloc(sizeof(struct lnode));
    ptrl->last = -1;
    return ptrl;
}

int Find(ElementType X, list ptrl)
{
    int i = 0;
    while(i <= ptrl->last && ptrl->data[i] != X){
        i++;
    }
    if (i > ptrl->last){
        return -1;
    } else return i;
}

void insert(ElementType x, int i, list ptrl)
{
    int j;
    if (ptrl->last == 9){
        printf("表满！！！");
        return;
    }

    if (i<1 || i>ptrl->last+2){
        printf("越位！！！");
    }
    for (j=ptrl->last; j>=i-1; j--){
        ptrl->data[j+1] = ptrl->data[j];
    }
    ptrl->data[i-1] = x;
    ptrl->last++;
}

void remove(ElementType x, int i, list ptrl)
{
    int j;
    if (i<1 || i>ptrl->last+1){
        printf("不存在第%d个元素", i);
        return;
    }
    for (j=i-1; j<=ptrl->last; j++){
        ptrl->data[j] = ptrl->data[j+1];
    }
    ptrl->last--;
    return;
}
