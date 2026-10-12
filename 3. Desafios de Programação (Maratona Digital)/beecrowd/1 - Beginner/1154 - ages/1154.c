#include <stdio.h>

int main(void)
{
	int x, result, count;

	result = 0;
	count = 0;

	scanf("%d", &x);

	while (x >= 0)
	{
		result = result + x;
		count++;
		scanf("%d", &x);
	}

	printf("%.2f\n", (float) result / count);
	return(0);
}