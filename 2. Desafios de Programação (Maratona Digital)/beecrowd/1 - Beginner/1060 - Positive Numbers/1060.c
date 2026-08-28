#include <stdio.h>

int main() {

	float x;
	int n, count;

	n = 1;
	count = 0;

	while (n < 7)
	{
		scanf("%f", &x);
		if (x >= 0)
			count++;
		n++;
	}

	printf("%d valores positivos\n", count);

    return 0;
}
