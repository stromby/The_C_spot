#include <stdio.h>

int main(void)
{
	int n, scan, x, flag;

	scanf("%d", &n);

	while (n--)
	{
		x = 2;
		flag = 1;

		scanf("%d", &scan);

		while (x <= scan / 2)
		{
			if (scan % x == 0)
				flag = 0;
			x++;
		}
		if (flag == 0)
			printf("%d nao eh primo\n", scan);
		else
			printf("%d eh primo\n", scan);
	}
	return(0);
}