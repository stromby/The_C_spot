#include <stdio.h>

int main(void)
{
	float x, y, result;

	result = 0;
	x = 1;
	y = 1;

	while (x <= 39)
	{
		result = result + x / y;
		x += 2;
		y *= 2;
	}

	printf("%.2f\n", (float) result);
	return(0);
}