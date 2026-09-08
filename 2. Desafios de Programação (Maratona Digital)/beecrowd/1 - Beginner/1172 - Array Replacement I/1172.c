#include <stdio.h>

int main(void)
{
	int n, x;

	n = 0;

	while (n < 10)
	{
		scanf("%d", &x);

		if (x <= 0)
			x = 1;

		printf("X[%d] = %d\n", n, x);
		n++;
	}

	return(0);
}