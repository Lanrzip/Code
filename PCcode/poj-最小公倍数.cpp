#include <stdio.h>

int minmul(int x, int y)
{
    if (x < y) return minmul(y, x);
    while (x % y){
        int tep = x % y;
        x = y;
        y = tep;
    }
    return y;
}
int main()
{
    int n, x;
    while (scanf("%d", &n) && n){
        int org = 1;
        int tell = 1;
        for (int i = 0; i < n; i++){
            scanf("%d", &x);
            int mm = minmul(x, org);
            org = x*org/mm;
            if (org >= 1000000){
                tell = 0;
                break;
            }
        }
        if (tell){
            printf("The CEO must bring %d pounds.\n", org);
        }else printf("Too much money to pay!\n");
    }
    return 0;
}