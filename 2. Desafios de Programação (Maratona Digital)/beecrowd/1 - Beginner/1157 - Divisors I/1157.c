#include <stdio.h>

int main(void)
{
	int x, y;

	y = 1;

	scanf("%d", &x);

	while (y <= x)
	{
		if (x % y == 0)
			printf("%d\n", y);
		y++;
	}

	return(0);
}