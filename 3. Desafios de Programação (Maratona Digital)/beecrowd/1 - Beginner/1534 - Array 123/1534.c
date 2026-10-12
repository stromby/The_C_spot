#include <stdio.h>

int main(void)
{
	int		n, i, count, rcount;

	while (scanf("%d", &n) == 1)
	{
		count = 1;
		rcount = n;

		while (count <= n)
		{
			i = 1;

			while (i <= n)
			{
				if (i == count && count != rcount)
					printf("1");
				else if (i == rcount)
					printf("2");
				else
					printf("3");
				i++;
			}
			printf("\n");
			count++;
			rcount--;
		}

	}

	return (0);
}