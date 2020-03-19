#include <stdio.h>

//int main()
//{
//	int n;
//	int fact = 1;
//	int i = 1;
//	scanf("%d", &n);
//	while (i != n)
//	{
//		fact = fact*(i + 1);
//		i ++;
//	}
//	printf("%d", fact);
//}

int main()
{
	int n;
	int fact = 1;
	int i = 1;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
	{
		fact *= i;
	}
	printf("%d", fact);
}
