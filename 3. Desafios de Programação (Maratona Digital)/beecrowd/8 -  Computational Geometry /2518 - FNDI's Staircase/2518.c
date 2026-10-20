#include <stdio.h>
#include <math.h>

int main(void)
{
	int	steps, height, length, width;
	double h, l, area;

	while (scanf("%d %d %d %d", &steps, &height, &length, &width) != EOF)
	{
		h = (double)height;
		l = (double)length;

		area = (steps * sqrt(h * h + l * l) * width) / 10000.0;

		printf("%.4f\n", area);
	}

	return (0);
}