#include <stdio.h>

int main() {

	int n, count;
	float x1, x2, x3;

	count = 1;

	scanf("%d", &n);

	while (count <= n)
	{
		scanf("%f%f%f", &x1, &x2, &x3);
		printf("%.1f\n", (2 * x1 + 3 * x2 + 5 * x3) / 10);
		count++;
		fflush(stdout);
	}

    return 0;
}