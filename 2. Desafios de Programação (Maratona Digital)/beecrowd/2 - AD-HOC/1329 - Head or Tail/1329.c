#include <stdio.h>

int main(void)
{
	int n, m, j, x;

	while (1)
	{
		scanf("%d", &n);

		if (n == 0)
			return (0);

		m = 0;
		j = 0;

		while (n--)
		{
			scanf("%d", &x);

			if (x == 0)
				m++;
			else
				j++;
		}

		printf("Mary won %d times and John won %d times\n", m, j);
	}

	return(0);
}