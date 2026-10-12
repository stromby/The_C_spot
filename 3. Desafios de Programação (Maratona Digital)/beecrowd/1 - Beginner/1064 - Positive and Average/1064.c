#include <stdio.h>

int main() {

	float x, total;
	int n, count;

	n = 1;
	count = 0;
	total = 0;

	while (n < 7)
	{
		scanf("%f", &x);
		if (x >= 0)
		{
			count++;
			total = total + x;
		}
		n++;
	}

	printf("%d valores positivos\n", count);
	printf("%.1f\n", total / count);

    return 0;
}