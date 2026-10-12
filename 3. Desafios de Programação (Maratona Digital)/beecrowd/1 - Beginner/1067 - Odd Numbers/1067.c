#include <stdio.h>

int main() {

	int n, x;

	n = 1;

	scanf("%d", &x);

	while (n <= x)
	{
		if (n % 2 != 0)
			printf("%d\n", n);
		n++;
	}

    return 0;
}