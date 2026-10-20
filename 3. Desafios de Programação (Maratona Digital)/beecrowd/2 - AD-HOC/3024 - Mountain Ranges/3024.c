#include <stdio.h>

int main(void)
{
	int n, diff, previous, current, total, max;

	scanf("%d %d", &n, &diff);

	total = 0;

	max = 0;

	while (n--)
	{
		scanf("%d", &current);

		if ((current - previous) <= diff)
			total++;
		else
			total = 1;

		if (total > max)
			max = total;

		previous = current;
	}

	printf("%d\n", max);

	return(0);
}