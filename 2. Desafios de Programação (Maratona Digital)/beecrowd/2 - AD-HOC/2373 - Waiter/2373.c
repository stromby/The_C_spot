#include <stdio.h>

int main(void)
{
	int n, cans, glasses, total;

	scanf("%d", &n);

	total = 0;

	while (n--)
	{
		scanf("%d %d", &cans, &glasses);

		if (cans > glasses)
			total = total + glasses;
	}

	printf("%d\n", total);

	return(0);
}