#include <stdio.h>
#include <time.h>

double f(int n, double a[], double x)
{
    int i;
    double sum = a[n];
    for (i=n; i>0; i--){
        sum = sum*x + a[i-1];
    }
    return sum;
}

clock_t start, stop;
double duration;
int main(){
    double a[3];
    start = clock();
    f(3, a, 2 );
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
    return duration;
}