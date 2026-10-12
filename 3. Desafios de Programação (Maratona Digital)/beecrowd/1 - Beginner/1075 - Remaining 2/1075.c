#include <stdio.h>

int main() {

	int n, count;

	count = 1;

	scanf("%d", &n);

	while (count <= 10000)
	{
		if (count % n == 2)
			printf("%d\n", count);
		count++;
	}

	return 0;
}