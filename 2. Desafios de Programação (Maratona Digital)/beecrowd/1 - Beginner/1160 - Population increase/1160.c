#include <stdio.h>

int main(void)
{
	int n, x, y, count;
	double gx, gy;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %d %lf %lf", &x, &y, &gx, &gy);

		count = 0;

		while (count <= 100 && x <= y)
		{
			x = x + x * gx / 100;
			y = y + y * gy / 100;
			count++;
		}

		if (count <= 100)
			printf("%d anos.\n", count);
		else
			printf("Mais de 1 seculo.\n");
	}

	return(0);
}