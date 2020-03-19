#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int i;
    int t = 0;
    int sum = 0;
    for (i=1; i<=n; i++){
        t = t*10 + m;
        sum += t;
    }
    printf("%d", sum);
}