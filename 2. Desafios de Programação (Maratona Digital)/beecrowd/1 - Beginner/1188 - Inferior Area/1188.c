#include <stdio.h>

int main(void)
{
	char n;
	int i;
	double x, total;

	total = 0;
	i = 1;

	scanf(" %c", &n);

	while (i < 145)
	{
		scanf("%lf", &x);

		if (i > 89 && i < 92)
			total = total + x;
		else if (i > 100 && i < 105)
			total = total + x;
		else if (i > 111 && i < 118)
			total = total + x;
		else if (i > 122 && i < 131)
			total = total + x;
		else if (i > 133 && i < 144)
			total = total + x;
		i++;
	}

	if (n == 'S')
		printf("%.1f\n", total);
	else if (n == 'M')
		printf("%.1f\n", total / 30.0);

	return(0);
}