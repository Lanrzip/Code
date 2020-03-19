#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    int i;
    double up = 2;
    double down = 1;
    for (i=1; i<=n; i++){
        double j;
        double tep;
        j = up/down;
        sum += j;
        tep = down;
        down = up;
        up += tep;
    }
    printf("%2f", sum);
}