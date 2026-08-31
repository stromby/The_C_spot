#include <stdio.h>

int main() {

	int x;
	int n, count;

	n = 1;
	count = 0;

	while (n < 6)
	{
		scanf("%d", &x);
		if (x % 2 == 0)
			count++;
		n++;
	}

	printf("%d valores pares\n", count);

    return 0;
}