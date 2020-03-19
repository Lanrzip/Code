#include <stdio.h>
#include <stdlib.h>

struct polynode
{
    int coef;
    int expon;
    struct polynode *link;
};
typedef struct  polynode *polynomial;
polynomial p1,p2;

int compare(int num1, int num2)
{
    if (num1 > num2){
        return 1;
    }else if (num1 < num2){
        return -1;
    }else return 0;
}

void attach(int co, int ex, polynomial *prear)
{
    polynomial p;
    p = (polynomial)malloc(sizeof(struct polynode));
    p->coef = co;
    p->expon = ex;
    p->link = NULL;
    (*prear)->link = p;
    *prear = p;
}

polynomial readpoly()
{
    polynomial p,rear,t;
    int co,ex,n;
    scanf("%d", n);
    p = (polynomial)malloc(sizeof(struct polynode));
    p->link = NULL;
    rear = p;
    while (n){
        scanf("%d %d", &co, &ex);
        attach(co, ex, &rear);
        t = p;
        p = p->link;
        free(t);
        n--;
    }
    return p;
}
polynomial polyadd(polynomial p1, polynomial p2)
{
    polynomial front,rear,temp;
    int sum;
    rear = (polynomial)malloc(sizeof(struct polynode));
    front = rear;
    while (p1 && p2){
        switch (compare(p1->expon, p2->expon))
        {
        case 1:
            attach(p1->coef, p1->expon, &rear);
            p1 = p1->link;
            break;
        case -1:
            attach(p2->coef, p2->expon, &rear);
            p2 = p1->link;
            break;
        case 0:
            sum = p1->coef + p2->coef;
            attach(sum, p1->expon, &rear);
            p1 = p1->link;
            p2 = p2->link;
            break;
        }
    }
    if (p1) attach(p1->coef, p1->expon, &rear);
    if (p2) attach(p2->coef, p2->expon, &rear);
    rear->link = NULL;
    temp = front;
    front = front->link;
    free(temp);
    return front;
}

polynomial mult(polynomial p1, polynomial p2)
{
    polynomial p,rear,t1,t2,t;
    int co,ex;
    if (!p1 || !p2) return NULL;
    t1 = p1;
    t2 = p2;
    p = (polynomial)malloc(sizeof(struct polynode));
    p->link = NULL;
    rear = p;
    while (t2){
        attach(t1->coef*t2->coef, t1->expon+t2->expon, &rear);
        t2 = t2->link;
    }
}