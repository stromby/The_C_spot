#include <stdio.h>

int main(void)
{
	int n, result;

	result = 1;

	scanf("%d", &n);

	while (n > 1)
	{
		result = result * n;
		n--;
	}

	printf("%d\n", result);
	return(0);
}