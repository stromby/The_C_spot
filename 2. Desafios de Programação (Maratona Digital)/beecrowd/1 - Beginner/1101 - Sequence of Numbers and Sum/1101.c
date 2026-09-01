#include <stdio.h>

int main() {

	int m, n, result;

	while (1)
	{
		scanf("%d%d", &m , &n);

		if(m <= 0 || n <= 0)
			return (0);

		result = 0;

		if (m < n)
			while (m <= n)
			{
				printf("%d ", m);
				result = result + m;
				m++;
			}
		else
			while (n <= m)
			{
				printf("%d ", n);
				result = result + n;
				n++;
			}

		printf("Sum=%d\n", result);
		fflush(stdout);

	}

    return 0;
}