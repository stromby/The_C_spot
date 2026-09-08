#include <stdio.h>

int main(void)
{
	int n, x, y, result;

	scanf("%d", &n);

	while (n--)
	{
		result = 0;

		scanf("%d %d", &x, &y);

		while (y)
		{
			if (x % 2 != 0)
			{
				result = result + x;
				y--;
			}
			x++;
		}

		printf("%d\n",result);
	}

	return(0);
}