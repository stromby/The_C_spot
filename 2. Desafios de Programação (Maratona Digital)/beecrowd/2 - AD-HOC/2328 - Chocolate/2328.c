#include <stdio.h>

int main(void)
{
	int n, parts, total;

	total = 0;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &parts);
		total = total + (parts - 1);
	}

	printf("%d\n", total);

	return (0);
}