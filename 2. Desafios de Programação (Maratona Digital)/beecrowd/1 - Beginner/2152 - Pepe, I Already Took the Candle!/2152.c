#include <stdio.h>

int main(void)
{
	int		n, hour, minute, state;

	scanf("%d", &n);

	while (n--)
	{
		scanf(" %d %d %d", &hour, &minute, &state);

		if (hour < 10)
			printf("0%d:", hour);
		else
			printf("%d:", hour);

		if (minute < 10)
			printf("0%d - ", minute);
		else
			printf("%d - ", minute);

		if (state == 1)
			printf("A porta abriu!\n");
		else
			printf("A porta fechou!\n");
	}

	return (0);
}