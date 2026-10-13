#include <stdio.h>

int main(void)
{
	int array[120] = {0};
	int total, bought, x, glued, i;

	i = 0;
	glued = 0;

	scanf("%d %d", &total, &bought);

	while (i < bought)
	{
		scanf("%d", &x);
		array[x] = 1;
		i++;
	}

	i = 0;

	while (i <= total)
	{
		if (array[i] == 1)
			glued++;
		i++;
	}

	printf("%d\n", total - glued);

	return(0);
}