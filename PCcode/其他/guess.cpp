#include <stdio.h>


int main()
{
	int number = 66;
	int count = 0;
	int x;
	do{
		scanf("%d", &x);
		if (x > number)
		{
			printf("猜大了，再试试");
		}
		else if(x < number)
		{
			printf("猜小了，再试试");
		} 
		count++;
	}while (x != number);
}
