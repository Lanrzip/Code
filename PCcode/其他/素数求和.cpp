#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int i;
    int sum = 0;
    int count = 0;
    if (m == 1){
        m = 2;
    }
    for (i=m; i<=n; i++){
        int j;
        int isPrime = 1;
        for (j=2; j<i-1; j++){
            if ( i % j == 0 ){
                isPrime = 0;
                break;
            }     
        }
        if (isPrime){
            count ++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d",count, sum);
    return 0;
}

//函数形式
// int isPrime(int i){
//     int ret = 1;
//     int j;
//     for (j=2; j<i-1; j++){
//         if ( i % j == 0 ){
//             ret = 0;
//             break;
//         }     
//     }
//      return ret;
// }

// int main(){
//     int m,n;
//     scanf("%d %d",&m,&n);
//     int i;
//     int sum = 0;
//     int count = 0;
//     if (m == 1){
//         m = 2;
//     }
//     for (i=m; i<=n; i++){

//         if (isPrime(i)){
//             count ++;
//             sum += i;
//         }
//     }
//     printf("count = %d, sum = %d",count, sum);
//     return 0;
// }