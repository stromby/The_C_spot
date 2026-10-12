#include <stdio.h>

int main(void)
{
	int	x, y, z;
	int	x1, y1, z1;
	int total;

	total = 0;

	scanf("%d %d %d", &x, &y, &z);
	scanf("%d %d %d", &x1, &y1, &z1);

	if (x < x1)
	{
		x = x1 - x;
		total += x;
	}

	if (y < y1)
	{
		y = y1 - y;
		total += y;
	}
	if (z < z1)
	{
		z = z1 - z;
		total += z;
	}
	printf("%d\n", total);

	return(0);
}