#include <stdio.h>

int main()
{
	int n;
	// scanf("%d", &n);
	for (n=1; n<=100; n++){
		int i; 
		int iprime = 1;
		for (i=2; i<n; i++) 
		{
			if (n % i == 0)
			{
				iprime = 0;
				break;
			}
		}
		if (iprime == 1)
		{
			printf("%d  ", n);
		}
}
}
