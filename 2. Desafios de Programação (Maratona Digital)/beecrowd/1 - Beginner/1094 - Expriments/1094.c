#include <stdio.h>

int main() {

	int n, x, count, total, coelhos, ratos, sapos;
	char type;

	count = 1;
	total = 0;
	coelhos = 0;
	sapos = 0;
	ratos = 0;

	scanf("%d", &n);

	while (count <= n)
	{
		scanf("%d %c", &x, &type);

		total = total + x;

		if (type == 'C')
			coelhos = coelhos + x;
		else if (type == 'R')
			ratos = ratos + x;
		else if (type == 'S')
			sapos = sapos + x;
		count++;
	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", (float) coelhos / total * 100);
	printf("Percentual de ratos: %.2f %%\n", (float) ratos / total * 100);
	printf("Percentual de sapos: %.2f %%\n", (float) sapos / total * 100);

    return 0;
}