#include <stdio.h>

int main(void)
{
	int n, x, y;
	char c;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %c %d", &x, &c, &y);

		if (x == y)
			printf("%d\n", x * y);
		else if (c >= 'A' && c <= 'Z')
			printf("%d\n", y - x);
		else
			printf("%d\n", x + y);
	}

	return(0);
}