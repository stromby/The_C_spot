#include <stdio.h>

int main(void)
{
	int		n,  produt, units;
	float	total;

	total = 0;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %d", &produt, &units);

		if (produt == 1001)
			total = total + units * 1.5;
		else if (produt == 1002)
			total = total + units * 2.5;
		else if (produt == 1003)
			total = total + units * 3.5;
		else if (produt == 1004)
			total = total + units * 4.5;
		else if (produt == 1005)
			total = total + units * 5.5;

	}
	printf("%.2f\n", total);

	return(0);
}