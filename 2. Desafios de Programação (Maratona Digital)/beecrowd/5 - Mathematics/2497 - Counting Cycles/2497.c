#include <stdio.h>

int main(void)
{
	int		n, i;

	i = 1;
	scanf("%d", &n);

	while (n > -1)
	{
		printf("Experiment %d: %d full cycle(s)\n", i, n / 2);

		i++;
		scanf("%d", &n);
	}

	return (0);
}