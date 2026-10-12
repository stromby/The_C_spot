#include <stdio.h>

int main() {

	int x;
	int n, c_odd, c_even, c_positive, c_negative;

	n = 1;
	c_even = 0;
	c_odd = 0;
	c_positive = 0;
	c_negative = 0;


	while (n < 6)
	{
		scanf("%d", &x);
		if (x % 2 == 0)
			c_even++;
		else
			c_odd++;

		if (x < 0)
			c_negative++;
		else if (x > 0)
			c_positive++;
		n++;
	}

	printf("%d valor(es) par(es)\n", c_even);
	printf("%d valor(es) impar(es)\n", c_odd);
	printf("%d valor(es) positivo(s)\n", c_positive);
	printf("%d valor(es) negativo(s)\n", c_negative);

    return 0;
}