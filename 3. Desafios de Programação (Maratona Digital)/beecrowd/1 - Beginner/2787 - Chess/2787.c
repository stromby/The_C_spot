#include <stdio.h>

int main(void)
{
	int	x, y, square;

	scanf("%d %d", &x, &y);

	square = 1;

	while (x--)
		square = -square;

	while (y--)
		square = -square;

	if (square == 1)
		printf("1\n");
	else
		printf("0\n");

	return(0);
}