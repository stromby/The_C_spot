#include <stdio.h>

int main(void)
{
	int n, scan, x, total;

	scanf("%d", &n);

	while (n--)
	{
		x = 1;
		total = 0;

		scanf("%d", &scan);

		while (x <= scan / 2)
		{
			if (scan % x == 0)
				total = total + x;

			x++;
		}

		if (total == scan)
				printf("%d eh perfeito\n", scan);
			else
				printf("%d nao eh perfeito\n", scan);
	}
	return(0);
}