#include <stdio.h>

int main(void)
{
	int n, i;

	i = 1;

	scanf("%d", &n);

	n *= 2;

	while (n--)
	{
		printf("%d ", i);
		printf("%d ", i * i);
		printf("%d\n", i * i * i);
		printf("%d ", i);
		printf("%d ", (i * i) + 1);
		printf("%d\n", (i * i * i) + 1);
		i++;
		n--;
	}

	return(0);
}