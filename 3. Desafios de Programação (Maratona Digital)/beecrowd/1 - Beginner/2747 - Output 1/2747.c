#include <stdio.h>

int main(void)
{
	int i, j;

	i = 39;

	while(i--)
		printf("-");
	printf("\n");

	j = 5;

	while (j--)
	{
		i = 37;
		printf("|");
		while (i--)
			printf(" ");
		printf("|");
		printf("\n");

	}

	i = 39;

	while(i--)
		printf("-");
	printf("\n");

	return(0);
}