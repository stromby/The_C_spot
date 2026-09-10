#include <stdio.h>

int main(void)
{
	int n, a, b, c, d, e;

	scanf("%d", &n);

	while (n != 0)
	{
		while (n--)
		{
			scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

			if (a > 127)
				a = 0;
			else
				a = 1;

			if (b > 127)
				b = 0;
			else
				b = 1;

			if (c > 127)
				c = 0;
			else
				c = 1;

			if (d > 127)
				d = 0;
			else
				d = 1;

			if (e > 127)
				e = 0;
			else
				e = 1;

			if (a + b + c + d + e != 1)
			{
				printf("*\n");
			}
			else
			{
				if (a == 1)
					printf("A\n");
				else if (b == 1)
					printf("B\n");
				else if (c == 1)
					printf("C\n");
				else if (d == 1)
					printf("D\n");
				else if (e == 1)
					printf("E\n");
			}
		}
		scanf("%d", &n);
	}
	return(0);
}