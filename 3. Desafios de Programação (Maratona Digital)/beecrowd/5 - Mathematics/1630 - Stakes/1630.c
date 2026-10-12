#include <stdio.h>

int main(void)
{
	int		x, y, x_temp, y_temp, max;


	while (scanf(" %d %d", &x, &y) == 2)
	{

		x_temp = x;
		y_temp = y;

		while (y_temp != 0)
		{
			max = y_temp;
			y_temp = x_temp % y_temp;
			x_temp = max;
		}

		printf("%d", (x / max + y / max) * 2);

		printf("\n");
	}

	return (0);
}