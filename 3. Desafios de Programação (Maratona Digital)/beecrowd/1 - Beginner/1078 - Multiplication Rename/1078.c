#include <stdio.h>

int main() {

	int n, count;

	count = 1;

	scanf("%d", &n);

	while (count <= 10)
	{
		printf("%d x %d = %d\n", count, n, n * count);
		count++;
	}

	return 0;
}