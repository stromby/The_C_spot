#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float x, y;
	int on_off;

	on_off = 1;

	while (on_off == 1)
	{
		scanf("%f", &x);

		while (x < 0 || x > 10)
		{
			printf("nota invalida\n");
			scanf("%f", &x);
		}

		scanf("%f", &y);

		while (y < 0 || y > 10)
		{
			printf("nota invalida\n");
			scanf("%f", &y);
		}

		printf("media = %.2f\n", (x + y) / 2);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &on_off);

		while (on_off < 1 || on_off > 2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &on_off);
		}

	}

    return 0;
}