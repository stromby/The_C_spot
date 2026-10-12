#include <stdio.h>

int main(void)
{
	int n, i;

	i = 1;

	scanf("%d", &n);

	while (n--)
	{
		printf("%d ", i);
		printf("%d ", i * i);
		printf("%d\n", i * i * i);
		i++;
	}

	return(0);
}