#include <stdio.h>

int main(void)
{
	int n, x, y, total, real, dif;
	char  signal;

	scanf("%d",&n);

	while (n--)
	{
		scanf("%d %c %d %*c %d", &x, &signal, &y, &total);

		if (signal == '+')
			real = x + y;
		else if (signal == '-')
			real = x - y;
		else if (signal == 'x')
			real = x * y;

		if (real > total)
			dif = real - total;
		else
			dif = total - real;

		printf("E");
		while (dif--)
		{
			printf("r");
		}
		printf("ou!\n");

	}

	return(0);
}