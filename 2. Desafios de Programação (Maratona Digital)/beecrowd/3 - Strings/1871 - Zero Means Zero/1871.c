#include <stdio.h>
#include <strings.h>

int main(void)
{
	int x, y, sum, i;

	char number[12] = {0};

	sum = 0;

	scanf("%d %d", &x, &y);

	while (x != 0 && y != 0)
	{
		i = 0;

		sum = x + y;

		snprintf(number, sizeof(number), "%d", sum);

		while (i < 12)
		{
			if (number[i] > '0' && number[i] <= '9')
				printf("%c", number[i]);
			i++;
		}

		bzero(number, sizeof(number));

		printf("\n");

		scanf("%d %d", &x, &y);
	}

	return(0);
}