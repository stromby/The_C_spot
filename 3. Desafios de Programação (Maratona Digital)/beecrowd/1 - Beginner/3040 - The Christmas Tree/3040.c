#include <stdio.h>

int main(void)
{
	int n, x, y, z;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %d %d", &x, &y, &z);

		if ((x >= 200 && x <= 300) && y >= 50 && z >= 150)
			printf("Sim\n");
		else
			printf("Nao\n");
	}

	return(0);
}