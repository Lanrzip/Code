#include <stdio.h>

int main(){
    int up,down;
    scanf("%d %d", &up, &down);
    int tep;
    if (up > down){
        tep = up;
        up = down;
        down = tep;
    }
    int a = up;
    int b = down;
    int t;
    while (t != 0){
        b = a;
        a = t;
        t = b%a;
    }
    printf("%d/%d", up/a, down/a);
}