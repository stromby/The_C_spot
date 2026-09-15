#include <stdio.h>

int main(void)
{
	int		n, c, l;

	while (scanf(" %d", &n) == 1)
	{
		l = 0;
		while (l < n)
		{
			c = 0;
			while (c < n)
			{
				if (c == l)
				{
					if (c == (n / 2))
						printf("4");
					else if (c >= n / 3 && c < n - n / 3)
						printf("1");
					else
						printf("2");
				}
				else if (c + 1 == n - l)
				{
					if (c >= n / 3 && c < n - n / 3)
						printf("1");
					else
						printf("3");
				}
				else
				{
					if ((c >= n / 3 && c < n - n / 3) && l >= n / 3 && l < n - n / 3)
						printf("1");
					else
						printf("0");
				}
				c++;
			}
			printf("\n");
			l++;
		}

		printf("\n");
	}
	return (0);
}