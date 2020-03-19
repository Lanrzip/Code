#include <stdio.h>
#include <malloc.h>
#define ElementType int

typedef struct lnode *list;
struct lnode
{
    ElementType data;
    list next;
};
struct lnode l;
list ptrl;

int length(list ptrl)
{
    list p = ptrl;
    int j = 0;
    while (p){
        p = p->next;
        j++;
    }
    return j;
}

list findkth(int k, list ptrl)
{
    list p = ptrl;
    int i = 1;
    while(p != NULL && i < k){
        p = p->next;
        i++;
    }
    if (i==k){
        return p;
    }else return NULL;
}

list find(ElementType x, list ptrl)
{
    list p = ptrl;
    while(p != NULL && p->data != x){
        p = p->next;
    }
    return p;
}

list insert(ElementType x, int i, list ptrl)
{
    list p,s;
    if(i ==1){
        s = (list)malloc(sizeof(struct lnode));
        s->data = x;
        s->next = ptrl;
        return s;
    }
    p = findkth(i-1, ptrl);
    if (p==NULL){
        printf("参数i错误");
        return NULL;
    }else{
        s = (list)malloc(sizeof(struct lnode));
        s->data = x;
        s->next = p->next;
        p->next = s;
        return ptrl;
    }
}

list remove(ElementType x, int i, list ptrl)
{
    list p,s;
    if(i ==1){
        s = ptrl;
        if (ptrl != NULL){
            ptrl = ptrl->next;
        }else return NULL;
        free(s);
        return ptrl;
    }
    p = findkth(i-1, ptrl);
    if (p==NULL){
        printf("第%d个节点不存在", i-1);
        return NULL;
    }else if (p->next == NULL){
        printf("第%d个节点不存在", i);
    }else {
        s = p->next;
        p->next = s->next;
        free(s);
        return ptrl;
    }
}