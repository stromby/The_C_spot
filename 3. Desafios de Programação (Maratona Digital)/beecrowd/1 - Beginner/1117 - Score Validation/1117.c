#include <stdio.h>

int main() {

	float x, y;

	scanf("%f", &x);

	while (x < 0 || x > 10)
	{
		printf("nota invalida\n");
		fflush(stdout);
		scanf("%f", &x);
	}

	scanf("%f", &y);

	while (y < 0 || y > 10)
	{
		printf("nota invalida\n");
		fflush(stdout);
		scanf("%f", &y);
	}

	printf("media = %.2f\n", (x + y) / 2);

    return 0;
}