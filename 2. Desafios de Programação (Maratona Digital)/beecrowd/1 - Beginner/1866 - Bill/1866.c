#include <stdio.h>

int main(void)
{
	int		n, rep, result;

	scanf(" %d", &n);

	while (n--)
	{
		scanf("%d", &rep);

		result = 0;

		while (rep--)
		{
			if (rep % 2 == 0)
				result++;
			else
				result--;
		}

		printf("%d\n", result);
	}
	return (0);
}