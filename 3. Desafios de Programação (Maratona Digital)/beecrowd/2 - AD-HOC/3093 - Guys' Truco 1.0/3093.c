#include <stdio.h>

int main(void)
{
	int n, i, q_count, j_count, k_count, a_count;
	char cartas[1100];
	scanf("%d", &n);

	while (n--)
	{
		scanf(" %s", cartas);

		q_count = 0;
		j_count = 0;
		k_count = 0;
		a_count = 0;
		i = 0;

		while (cartas[i])
		{
			if (cartas[i] == 'Q')
				q_count++;
			else if (cartas[i] == 'J')
				j_count++;
			else if (cartas[i] == 'K')
				k_count++;
			else if (cartas[i] == 'A')
				a_count++;
			i++;
		}


		if(q_count > 0 && j_count > 0 && k_count > 0 && a_count > 0)
			printf("Aaah muleke\n");
		else
			printf("Ooo raca viu\n");

	}

	return(0);
}