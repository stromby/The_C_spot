#include <stdio.h>

int main(void)
{
	int total, teste, n50, n10, n5, n1;

	teste = 0;

	scanf("%d", &total);


	while (total != 0)
	{
		teste++;

		n50 = total / 50;
		total = total % 50;
		n10 = total / 10;
		total = total % 10;
		n5 = total / 5;
		total = total % 5;
		n1 = total / 1;

		printf("Teste %d\n", teste);
		printf("%d %d %d %d\n", n50, n10, n5, n1);
		printf("\n");

		scanf("%d", &total);
	}

	return (0);
}