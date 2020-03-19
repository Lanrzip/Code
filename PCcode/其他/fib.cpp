#include <stdio.h>

void main(int n){
	if (n <= 2){
		return 1;
	}else{
		return main(n-1) + main(n-2);
	}
}


