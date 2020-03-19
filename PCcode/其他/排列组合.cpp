#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int count = 0;
	for (int i = a; i<=a+3; i++){
		for (int j = a; j<=a+3; j++){
			for (int k = a; k<=a+3; k++){
				if (i != j && j!=k && i != k){
					printf("%d%d%d ", i, j, k);
					count ++;
					if (count == 6){
						printf("\n");
						count = 0;
					}
				}
			}
		}
	}
} 
