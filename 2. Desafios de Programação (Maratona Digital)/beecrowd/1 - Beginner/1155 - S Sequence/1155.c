#include <stdio.h>

int main(void)
{
	float x, result;

	result = 0;
	x = 1;

	while (x <= 100)
	{
		result = result + 1 / x;
		x++;
	}

	printf("%.2f\n", (float) result);
	return(0);
}