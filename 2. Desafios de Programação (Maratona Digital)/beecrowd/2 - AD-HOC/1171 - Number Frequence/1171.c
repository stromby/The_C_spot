#include <stdio.h>

int main()
{
	int n, count[2001] = {0}, x;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &x);
		count[x]++;
	}

	n = 0;

	while (n <= 2000)
	{
		if (count[n] != 0)
			printf("%d aparece %d vez(es)\n",n , count[n]);
		n++;
	}

    return 0;
}