#include <stdio.h>
#include <string.h>


void remove_last_spaces (char *str)
{
	int i;

	i = strlen(str) - 1;

	while (i >= 0 && str[i] == ' ')
	{
		str[i] = 0;
		i--;
	}
}

void remove_midlle_spaces(char *str)
{
	char temp[101];
	int i;
	int j;

	strcpy(temp, str);

	i = 0;
	j = 0;

	while(temp[i])
	{
		if (temp[i] == ' ' && temp[i + 1] == ' ')
			i++;
		else
		{
			str[j] = temp [i];
			i++;
			j++;
		}
	}
	str[j] = '\0';
}

int main(void)
{
	int n, count, i;
	size_t len_max;
	char array[100][101];

	i = 0;

	scanf("%d", &n);

	while (n != 0)
	{
		len_max = 0;
		count = 1;
		i = 0;
		while (count <= n)
		{
			scanf(" %50[^\n]", array[i]);

			remove_last_spaces(array[i]);

			remove_midlle_spaces(array[i]);

			if (len_max < strlen(array[i]))
				len_max = strlen(array[i]);

			count++;
			i++;
		}

		i = 0;
		count = 1;

		while (count <= n)
		{
			printf("%*s\n", (int)len_max, array[i]);
			count++;
			i++;
		}

		scanf("%d", &n);

		if (n != 0)
			printf("\n");
	}

	return(0);
}