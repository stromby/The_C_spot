#include <stdio.h>

int main(void)
{
	int		n, i, j, count;

	scanf(" %d", &n);

	while (n != 0)
	{
		i = 1;

		while (i <= n)
		{
			j = i;
			count = 0;

			while (j > 1)
			{
				printf("%3d ", j);
				count++;
				j--;
			}
			while (count < n)
			{
				count++;
				if (count < n)
					printf("%3d ", j);
				else
					printf("%3d", j);
				j++;
			}
			printf("\n");
			i++;
		}

		printf("\n");

		scanf(" %d", &n);
	}

	return (0);
}