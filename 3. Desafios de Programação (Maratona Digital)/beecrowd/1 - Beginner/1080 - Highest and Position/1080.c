#include <stdio.h>

int main() {

	int x, count, max, i;

	count = 1;
	max = 0;
	i = 0;

	while (count <= 100)
	{
		scanf("%d", &x);
		if (x > max)
		{
			max = x;
			i = count;
		}
		count++;
	}

	printf("%d\n", max);
	printf("%d\n", i);

    return 0;
}