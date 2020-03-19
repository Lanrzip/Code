#include <stdio.h>

int main()
{
	int n = 1;
	int count = 1;
	while (count <= 50)
	{
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
			printf("%d\t", n);
			if (count %5 == 0)
			{
				printf("\n");
			}
			count ++;	
		}
		n ++; 
	}
}
