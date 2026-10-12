#include <stdio.h>

int main() {

	int n, count;
	float x, y, result;

	count = 1;
	result = 0;

	scanf("%d", &n);

	while (count <= n)
	{
		scanf("%f %f", &x, &y);

		if (y == 0)
			printf("divisao impossivel\n");
		else
		{
			result = (x / y);
			printf("%.1f\n", result);
		}

		count++;
		fflush(stdout);
	}

    return 0;
}