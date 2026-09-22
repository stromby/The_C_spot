#include <stdio.h>

int main(void)
{
	int n, total;

	scanf("%d", &n);

	if (n <= 10)
		total = 7;
	else if (n <= 30)
		total = 7 + (n - 10) * 1;
	else if (n <= 100)
		total = 27 + (n - 30) * 2;
	else
		total = 167 + (n - 100) * 5;

	printf("%d\n", total);
	return(0);
}