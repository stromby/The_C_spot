#include <stdio.h>

int main(void)
{
	int x, y, result;

	result = 0;

	scanf("%d %d", &x, &y);

	while (y <= 0)
	{
		scanf("%d", &y);
	}

	while (y--)
	{
		result = result + x;
		x++;
	}

	printf("%d\n", result);

	return(0);
}