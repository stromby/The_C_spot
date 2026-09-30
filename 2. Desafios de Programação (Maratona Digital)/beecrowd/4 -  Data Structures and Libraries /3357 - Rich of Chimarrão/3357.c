#include <stdio.h>

int	main(void)
{
	char array[15][15];
	int n;
	int i;
	int rep;
	float total;
	float partial;
	float rest;

	scanf("%d", &n);
	scanf("%f %f", &total, &partial);

	i = 0;

	while(i < n)
	{
		scanf("%s", array[i]);
		i++;
	}

	rep = (int)(total / partial);

	rest = total - (rep * partial);

	if (rest == 0)
	{
		i = -1;
		rest = partial;
	}
	else
		i = 0;

	while(rep--)
	{
		i++;

		if (i == n)
			i = 0;
	}

	printf("%s %.1f\n", array[i], rest);

	return (0);
}