#include <stdio.h>

int main()
{
	int n;
	int i;
	scanf("%d", &n);
	int iprime = 1;
	for (i=2; i<n; i++) 
	{
		if (n % i == 0)
		{
			iprime = 0;
			break;
		}
	}
	if (iprime == 0)
	{
		printf("%d不是素数", n);
	}else {
		printf("%d是素数", n);
	}	
}
