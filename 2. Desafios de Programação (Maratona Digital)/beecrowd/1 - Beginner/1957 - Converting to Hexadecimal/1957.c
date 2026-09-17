#include <stdio.h>

void print_hexa(int x)
{
	if (x >= 16)
	{
		print_hexa(x / 16);
	}

	if (x % 16 == 10)
		printf("A");
	else if (x % 16 == 11)
		printf("B");
	else if (x % 16 == 12)
		printf("C");
	else if (x % 16 == 13)
		printf("D");
	else if (x % 16 == 14)
		printf("E");
	else if (x % 16 == 15)
		printf("F");
	else
		printf("%d", x % 16);
}


int main(void)
{
	int		x;

	scanf("%d", &x);

	print_hexa(x);
	printf("\n");

	return (0);
}