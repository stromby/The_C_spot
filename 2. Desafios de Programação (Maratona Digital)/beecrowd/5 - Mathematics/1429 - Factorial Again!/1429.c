#include <stdio.h>

int main(void)
{
	int x, i, fact;
	long long result;

	scanf("%d", &x);

	while (x != 0)
	{
		result = 0;
		i = 1;
		fact = 1;
		while (x >= 10)
		{
			fact = fact * i;
			result = result + (x % 10) * fact;
			x = x / 10;
			i++;
		}

		fact = fact * i;
		result = result + x * fact;

		printf("%lld\n", result);

		scanf("%d", &x);
	}
	return(0);
}