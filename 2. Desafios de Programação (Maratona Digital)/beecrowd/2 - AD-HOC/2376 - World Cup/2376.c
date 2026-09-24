#include <stdio.h>

int main(void)
{
	int n, i, x, y, winner;
	char teams[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
	int quartos[8] = {0};
	int meias[4] = {0};
	int final[2] = {0};

	n = 0;
	i = 0;

	while (n < 8)
	{
		scanf("%d %d",&x ,&y);

		if (x > y)
			quartos[n] = (n + i);
		else
			quartos[n] = (n + i) + 1;

		n++;
		i++;
	}

	n = 0;
	i = 0;

	while (n < 4)
	{
		scanf("%d %d",&x ,&y);

		if (x > y)
			meias[n] = quartos[(n + i)];
		else
			meias[n] = quartos[(n + i) + 1];

		n++;
		i++;
	}

	n = 0;
	i = 0;

	while (n < 2)
	{
		scanf("%d %d",&x ,&y);

		if (x > y)
			final[n] = meias[(n + i)];
		else
			final[n] = meias[(n + i) + 1];

		n++;
		i++;
	}

	scanf("%d %d",&x ,&y);

	if (x > y)
		winner = final[0];
	else
		winner = final[1];

	printf("%c\n", teams[winner]);

	return(0);
}