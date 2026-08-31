#include <stdio.h>

int main() {

	int n, number;

	number = 1;

	scanf("%d", &n);

	while (number <= n)
	{
		if (number % 2 == 0)
			printf("%d^2 = %d\n", number, number * number);
		number++;
	}

    return 0;
}