#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int first = 1;
	int i = 1;
	while (i < n){
		first *= 10;
		i ++;
	} 
	i = first;
	while (i < first*10){
		int j = i;
		int sum = 0;
		while (j>0) {
			int d = j % 10;
			j /= 10;			
			int e = d;
			int k = 1;
			while (k < n){
				e *= d; 
				k ++;
			}
			sum += e;
		}
		if (sum == i){
			printf("%d\n", i);
		}
		i ++;
	}
}


//int main(){
//	int n;
//	scanf("%d", &n);
//	double first = pow(10, n-1);
//	double end = pow(10, n) - 1;
//	int i = first;
//	while (i < end){
//		int j = i;
//		double sum = 0;
//		while (j > 0){
//			int d = j % 10;
//			sum += pow(d, n);
//			j /= 10;	
//		}
//		if (sum == i){
//			printf("%d", i);
//		}
//	}
//}