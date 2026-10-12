#include <stdio.h>

int main(void)
{
	int		n, x, time, total;

	scanf("%d", &n);

	while (n != 0)
	{
		time = 0;
		total = 0;
		while (n--)
		{
			scanf("%d", &x);

			if (x > time)
				total = total + 10;
			else
				total = total + (x + 10) - time;

			time = x + 10;
		}

		printf("%d\n", total);

		scanf("%d", &n);
	}
	return (0);
}