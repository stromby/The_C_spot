#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, x, y, total;
	char hamekame[220];

	scanf("%d", &n);

	while (n--)
	{
		i = 1;
		x = 0;
		y = 0;

		scanf("%s", hamekame);

		while (hamekame[i] == 'a')
		{
			x++;
			i++;
		}

		i += 3;

		while (hamekame[i] == 'a')
		{
			y++;
			i++;
		}

		total = x * y;

		printf("k");

		while(total--)
			printf("a");

		printf("\n");

	}

	return(0);
}