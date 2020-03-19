#include <stdio.h>

int main()
{
	int x = 200;
	int ge;
	int jia = 0;
	while(x != 0)
	{
		ge = x%10;
		printf("%d", ge); 
		jia = jia*10 + ge;
		x /= 10;
	}
//	printf("%d", jia);
}
