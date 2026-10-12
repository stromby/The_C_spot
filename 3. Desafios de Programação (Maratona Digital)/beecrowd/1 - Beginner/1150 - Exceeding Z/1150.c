#include <stdio.h>

int main(void)
{
	int x, y, count;

	long result;

	count = 0;
	result = 0;

	scanf("%d %d", &x, &y);

	while (y <= x)
	{
		scanf("%d", &y);
	}

	while (result <= y)
	{
		result = result + x;
		count++;
		x++;
	}

	printf("%d\n", count);

	return(0);
}