#include <stdio.h>

int main(void)
{
	int		n, cost, visits, total;

	scanf("%d", &n);

	while (n != -1)
	{
		visits = 0;
		total = 0;
		while (n--)
		{
			scanf("%d", &cost);

			total += cost;

			if (total % 100 == 0)
				visits++;
		}
		printf("%d\n", visits);
		scanf("%d", &n);
	}

	return (0);
}