#include <stdio.h>

int main(void)
{
	int n, i, presence, count;

	scanf("%d", &n);

	i = 0;
	count = 0;

	while (i++ < n)
	{
		scanf("%d", &presence);

		if (presence == 1)
			count++;
	}

	printf("%d\n", count);

	return(0);
}