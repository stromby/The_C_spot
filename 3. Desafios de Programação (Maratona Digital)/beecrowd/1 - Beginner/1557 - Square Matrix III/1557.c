#include <stdio.h>

int main(void)
{
	int		n, i, j, l, c, control, digits;

	scanf("%d", &n);

	while (n != 0)
	{
		control = 1;
		digits = 1;
		i = 1;

		while (i < n)
		{
			control = control * 2 * 2;
			i++;
		}

		while (control >= 10)
		{
			control = control / 10;
			digits++;
		}

		l = 1;
		i = 1;

		while (l <= n)
		{
			c = 1;
			j = i;

			while (c <= n)
			{
				printf("%*d", digits, j);
				j = j * 2;
				c++;
				if (c <= n)
					printf(" ");
			}
			printf("\n");
			l++;
			i = i * 2;
		}
		printf("\n");
		scanf("%d", &n);
	}

	return (0);
}