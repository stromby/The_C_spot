#include <stdio.h>

int check_double(int grid[120][120], int i, int j)
{
	int sum;

	sum = 0;

	if (grid[j][i])
		sum++;
	if (grid[j + 1][i])
		sum++;
	if (grid[j][i + 1])
		sum++;
	if (grid[j + 1][i + 1])
		sum++;

	return (sum);
}

int main(void)
{
	int grid[120][120];
	int	size,i, j;


	scanf("%d", &size);

	j = 0;

	while (j < size + 1)
	{
		i = 0;
		while (i < size + 1)
		{
			scanf("%d", &grid[j][i]);
			i++;
		}
		j++;
	}

	j = 0;

	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (check_double(grid, i, j) > 1)
				printf("S");
			else
				printf("U");
			i++;
		}
		j++;

		printf("\n");
	}

	return(0);
}