#include <stdio.h>

int main(void)
{
	int n, x, y, temp;

	temp = 0;

	scanf("%d", &n);

	if (n == 1)
	{
		printf("0\n");
		return (0);
	}

	if (n == 2)
	{
		printf("0 1\n");
		return (0);
	}

	printf("0 1");

	x = 0;

	y = 1;

	while (n-- > 2)
	{
		temp = x;
		x = y;
		y = y + temp;

		printf(" %d", y);
	}

	printf("\n");
	return(0);
}