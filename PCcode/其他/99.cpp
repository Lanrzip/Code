#include <stdio.h>

int main(){
	int i;
	for (i=1; i<=9; i++){
		int j;
		for (j=1; j<=i; j++){
			printf("%d x %d = %d", j, i, i*j);
			if (i*j < 10){
				printf("   ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
