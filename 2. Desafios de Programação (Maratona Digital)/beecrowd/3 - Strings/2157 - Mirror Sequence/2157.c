#include <stdio.h>

void mirror_number(int i)
{

	while (i >= 10)
	{
		printf("%d", i %  10);
		i = i / 10;
	}

	printf("%d", i %  10);
}

int main(void)
{
	int		n, start, end, i;

	scanf("%d", &n);

	while (n--)
	{
		scanf(" %d %d", &start, &end);

		i = start;

		while (i <= end)
			printf("%d", i++);


		while (--i >= start)
			mirror_number(i);

		printf("\n");
	}

	return (0);
}