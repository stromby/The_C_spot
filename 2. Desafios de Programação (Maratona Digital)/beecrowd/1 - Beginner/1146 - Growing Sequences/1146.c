#include <stdio.h>

int main(void)
{
	int x, i;

	scanf("%d", &x);

	while (x != 0)
	{
		i = 1;

		while (i <= x)
		{
			if (i == x)
				printf("%d\n", i);
			else
				printf("%d ", i);

			i++;
		}

		scanf("%d", &x);
	}

	return(0);
}