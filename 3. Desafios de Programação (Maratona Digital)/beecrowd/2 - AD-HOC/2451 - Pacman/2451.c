#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, j, max_food, current_food, direction;
	char **array;

	scanf("%d", &n);

	array = malloc(sizeof(char *) * n);

	i = 0;

	while (i < n)
	{
		array[i] = malloc(sizeof(char) * (n + 1));
		i++;
	}

	i = 0;

	while (i < n)
	{
		scanf("%s", array[i]);
		i++;
	}

	j = 0;
	current_food = 0;
	max_food = 0;
	direction = 1;
	i = 0;

	while (j < n)
	{
		while (i >= 0 && i < n)
		{
			if (array[j][i] == 'o')
				current_food++;
			else if (array[j][i] == 'A')
				current_food = 0;

			if (current_food > max_food)
				max_food = current_food;

			i = i + direction;
		}
		direction = -direction;
		j++;
		i = i + direction;
	}

	printf("%d\n", max_food);

	return(0);
}