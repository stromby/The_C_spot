#include <stdio.h>

int main(void)
{
	int n, id, count, idg, game;


	while(scanf("%d %d", &n, &id) == 2)
	{
		count = 0;
		while (n--)
		{
			scanf("%d %d", &idg, &game);
			if (idg == id && !game)
				count++;
		}
		printf("%d\n", count);
	}

	return(0);
}