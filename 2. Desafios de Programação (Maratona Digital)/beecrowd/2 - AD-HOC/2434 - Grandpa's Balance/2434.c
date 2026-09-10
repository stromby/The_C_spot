#include <stdio.h>

int main(void)
{
	int days, initial, x, min;

	scanf("%d %d", &days, &initial);

	min = initial;

	while (days--)
	{
		scanf("%d", &x);

		initial = initial + x;

		if (initial < min)
			min = initial;
	}

	printf("%d\n", min);

	return(0);
}