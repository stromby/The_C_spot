#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, x, y;
	long long result;
	char s[50];

	scanf("%d", &n);

	while (n--)
	{
		result = 1;

		scanf("%d%s", &x, s);

		y = strlen(s);

		while (x >= 1)
		{

			result = result * x;
			x = x - y;
		}

		printf("%lld\n", result);
	}
	return(0);
}