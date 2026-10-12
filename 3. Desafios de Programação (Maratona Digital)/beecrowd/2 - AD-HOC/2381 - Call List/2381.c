#include <stdio.h>
#include <string.h>

void change_place(char array[][25], int n)
{
	int i;
	int j;
	char temp[25];
	j = 0;

	while (j < n - 1)
	{
		i = 0;

		while (i < n - j - 1)
		{
			if (strcmp (array[i], array[i + 1]) > 0)
			{
				strcpy(temp, array[i]);
				strcpy(array[i], array[i + 1]);
				strcpy(array[i + 1], temp);
			}
			i++;
		}
		j++;
	}
}

int main(void)
{

	int n, place, i;
	char name[120][25];

	scanf("%d %d", &n, &place);

	i = 0;

	while (i < n)
	{
		scanf("%s", name[i]);
		i++;
	}

	name[i][0] = '\0';

	i = 0;

	change_place(name, n);

	printf("%s\n", name[place - 1]);
	return (0);
}