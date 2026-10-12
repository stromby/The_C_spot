#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int x, y, inter, gremio, empates;
	int on_off;

	on_off = 1;
	inter = gremio = empates = 0;

	while (on_off == 1)
	{
		scanf("%d%d", &x, &y);

		if (x > y)
			inter++;
		else if (y > x)
			gremio++;
		else
			empates++;

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &on_off);

		while (on_off < 1 || on_off > 2)
		{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &on_off);
		}
	}

	printf("%d grenais\n", gremio + inter + empates);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empates);

	if (inter > gremio)
		printf("Inter venceu mais\n");
	else if (gremio > inter)
		printf("Gremio venceu mais\n");
	else
		printf("Não houve vencedo\n");

    return 0;
}