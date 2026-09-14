#include <stdio.h>

int main(void)
{
	char	n;
	int		l;
	int		c;
	double	x;
	double	total;

	total = 0;

	l = 0;
	scanf(" %c", &n);
	while (l < 12)
	{

		c = 0;
		while (c < 12)
		{
			scanf("%lf", &x);

			if (c > l && c > 11 - l)
				total = total + x;
			c++;
		}
		l++;
	}
	if (n == 'S')
		printf("%.1f\n", total);
	else if (n == 'M')
		printf("%.1f\n", total / 30.0);
	return (0);
}
