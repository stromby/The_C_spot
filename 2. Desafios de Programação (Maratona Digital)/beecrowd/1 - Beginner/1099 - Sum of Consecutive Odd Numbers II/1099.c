#include <stdio.h>

int main() {

	int n, count, x1, x2, result;

	count = 1;

	scanf("%d", &n);

	while (count <= n)
	{
		result = 0;

		scanf("%d%d", &x1, &x2);

		if (x1 < x2)
			x1++;
		else if (x2 < x1)
			x2++;

		while (x1 < x2)
		{
			if (x1 % 2 != 0)
				result = result + x1;
			x1++;
		}

		while (x2 < x1)
		{
			if (x2 % 2 != 0)
				result = result + x2;
			x2++;
		}

		printf("%d\n", result);
		count++;
		fflush(stdout);
	}

    return 0;
}