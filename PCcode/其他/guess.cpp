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
			printf("�´��ˣ�������");
		}
		else if(x < number)
		{
			printf("��С�ˣ�������");
		} 
		count++;
	}while (x != number);
}
