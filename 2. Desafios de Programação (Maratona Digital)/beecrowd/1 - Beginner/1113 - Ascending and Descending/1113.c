#include <stdio.h>

int main() {

	int x, y;

	while (1)
	{
		scanf("%d%d", &x , &y);

		if(x == y)
			return (0);


		if (x < y)
			printf("Crescente\n");
		else
			printf("Decrescente\n");

		fflush(stdout);
	}

    return 0;
}