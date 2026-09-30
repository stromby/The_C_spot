#include <stdio.h>

int main(void)
{
	int n, max;


	max = 0;

	scanf("%d", &n);

	while (n != 0)
	{
		if (n > max)
			max = n;

		scanf("%d", &n);
	}

	printf("%d\n", max);

	return(0);
}