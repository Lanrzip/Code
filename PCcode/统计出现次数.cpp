#include <stdio.h>

int main(void){
    int x;
    scanf("%d", &x);
    int count[10];
    int i;
    for (i=0; i<=9; i++){
        count[i] = 0;
    }
    while (x != -1){
        count[x]++;
        scanf("%d", &x);
    }
    for (i=0; i<=9; i++){
        printf("%d:%d\n", i, count[i]);
    }
}