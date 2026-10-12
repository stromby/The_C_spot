#include <stdio.h>

int main(void)
{
	int x, y, i, j;

	j = 1;

	scanf("%d %d", &x, &y);

	while (j <= y)
	{
		i = 1;

		while (i <= x && j <= y)
		{
			if (i == x || j == y)
				printf("%d", j);
			else
				printf("%d ", j);

			i++;
			j++;
		}
			printf("\n");
	}

	return(0);
}