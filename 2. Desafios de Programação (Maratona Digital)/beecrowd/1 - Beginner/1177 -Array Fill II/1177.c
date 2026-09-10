#include <stdio.h>

int main(void)
{
	int n, i, j;

	i = 0;

	scanf("%d", &n);

	while (i < 1000)
	{
		j = 0;

		while (j < n && i < 1000)
		{
			printf("N[%d] = %d\n", i ,j);
			j++;
			i++;
		}
	}

	return(0);
}