#include <stdio.h>
#include <math.h>

int main(void)
{
	float		n;

	scanf("%f", &n);

	printf("%.1f %.1f\n",n / log(n), 1.25506 * n / log(n));

	return (0);
}