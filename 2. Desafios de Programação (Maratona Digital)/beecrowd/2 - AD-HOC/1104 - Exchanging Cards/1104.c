#include <stdio.h>

int main(void)
{
	int a, b, x, count, max_a, max_b;

	static int array_a[100001] = {0};
	static int array_b[100001] = {0};

	while ((scanf("%d %d", &a, &b)) && !(a == 0 && b == 0))
	{
		count = 1;
		max_a = 0;
		max_b = 0;

		while (count <= a)
		{
			scanf("%d", &x);
			array_a[x] = 1;
			count++;
		}

		count = 1;

		while (count <= b)
		{
			scanf("%d", &x);
			array_b[x] = 1;
			count++;
		}

		x = 1;
		count = 0;

		while (x <= 100000)
		{
			if (array_a[x] && !array_b[x])
				max_a++;
			if (!array_a[x] && array_b[x])
				max_b++;
			x++;
		}

		if (max_a < max_b)
			printf("%d\n", max_a);
		else
			printf("%d\n", max_b);

		x = 1;

		while (x <= 100000)
		{
			array_a[x] = 0;
			array_b[x] = 0;
			x++;
		}
	}

	return(0);
}