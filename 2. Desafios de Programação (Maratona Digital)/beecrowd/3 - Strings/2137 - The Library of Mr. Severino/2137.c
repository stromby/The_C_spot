#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**allocate_array_same_size_str(int num_strings, int tamanho_str)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (num_strings + 1));
	if (!arr)
		return (NULL);

	i = 0;
	while (i < num_strings)
	{
		arr[i] = (char *)malloc(sizeof(char) * (tamanho_str + 1));

		if (!arr[i])
		{
			while (i > 0)
			{
				free(arr[--i]);
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

void	free_str_array(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void sort(char **array, int n)
{
	int i;
	char *temp;

	while(n > 1)
	{
		i = 0;
		while (i < n - 1)
		{
			if (strcmp(array[i], array[i +1]) > 0)
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			i++;
		}
		n--;
	}
	return ;
}

int main(void)
{
	int		n, i;
	char **array;

	while (scanf("%d", &n) == 1)
	{

		array = allocate_array_same_size_str(n, 4);

		if (array == NULL)
		{
			printf("Allocation error\n");
			return (1);
		}

		i = 0;

		while(i < n)
		{
			scanf("%s", array[i]);
			i++;
		}

		sort(array, n);

		i = 0;

		while(array[i])
		{
			printf("%s\n", array[i]);
			i++;
		}

		free_str_array(array);
	}

	return (0);
}