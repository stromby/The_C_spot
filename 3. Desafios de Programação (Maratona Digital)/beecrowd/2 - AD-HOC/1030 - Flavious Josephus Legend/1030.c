#include <stdio.h>

int main(void)
{
	int nc, j, n, k, position, size;

	j = 1;

	scanf("%d", &nc);

	while (nc--)
	{
		scanf("%d %d", &n, &k);

		position = 0;
		size = 2;

		while (size <= n)
		{
			position = (position + k) % size;
			size++;
		}

		printf("Case %d: %d\n", j, position + 1);

		j++;
	}

	return(0);
}