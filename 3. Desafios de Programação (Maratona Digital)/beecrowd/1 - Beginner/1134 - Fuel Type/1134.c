#include <stdio.h>

int main(void)
{
	int x;
	int array[4] = {0};

	scanf("%d", &x);

	while (x != 4)
	{
		if (x > 0 && x < 4)
			array[x]++;

		scanf("%d", &x);
	}


	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",array[1]);
	printf("Gasolina: %d\n",array[2]);
	printf("Diesel: %d\n",array[3]);

	return(0);
}