#include <stdio.h>
#include <string.h>

int main(void)
{
	int	x, jeep, total;
	char str[10];

	total = 0;
	jeep = 0;

	scanf("%s", str);

	while (strcmp(str, "ABEND") != 0)
	{
		scanf("%d", &x);

		if (strcmp(str, "SALIDA") == 0)
		{
			jeep++;
			total += x;
		}
		else
		{
			jeep--;
			total -= x;
		}

		scanf("%s", str);
	}

	printf("%d\n%d\n", total, jeep);

	return(0);
}