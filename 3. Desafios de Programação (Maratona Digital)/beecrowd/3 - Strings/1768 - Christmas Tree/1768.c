#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, space;
	char *stars = "***************************************************************************************************";
	setvbuf(stdout, NULL, _IONBF, 0);


	while (scanf("%d", &n) == 1)
	{
		i = 1;

		while (i <= n)
		{
			space = (n - i) / 2;

			printf("%*s", space, "");

			printf("%.*s", i, stars);

			i += 2;

			printf("\n");
		}

		printf("%*s\n", 1 + (n - 1) / 2, "*");
		printf("%*s\n", 3 + (n - 3) / 2, "***");
		printf("\n");
	}

	return(0);
}