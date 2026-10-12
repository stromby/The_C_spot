#include <stdio.h>

int main(void)
{
	int n, i, j;

	scanf("%d", &n);

	while (n--)
	{

		scanf("%d %d", &i, &j);
		printf("%d\n", i + j);

	}

	return(0);
}