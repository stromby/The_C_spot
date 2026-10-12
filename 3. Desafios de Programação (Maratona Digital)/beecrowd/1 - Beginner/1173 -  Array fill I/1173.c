#include <stdio.h>

int main(void)
{
	int n, i;

	i = 0;

	scanf("%d", &n);

	while (i < 10)
	{
		printf("N[%d] = %d\n", i ,n);
		i++;
		n = n *2;
	}

	return(0);
}