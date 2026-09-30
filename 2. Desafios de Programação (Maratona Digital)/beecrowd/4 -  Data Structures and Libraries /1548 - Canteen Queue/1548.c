#include <stdio.h>
#include <stdlib.h>

int	compare_desc(const void *a, const void *b)
{
	return (*(int *)b - *(int *)a);
}

int	main(void)
{

	int array[1100];
	int temp[1100];
	int i;
	int n;
	int count;
	int m;

	scanf("%d", &m);

	while (m--)
	{
		scanf("%d", &n);

		i = 0;

		while(i < n)
		{
			scanf("%d", &array[i]);
			temp[i] = array[i];
			i++;
		}

		qsort(temp, n, sizeof(int), compare_desc);

		i = 0;
		count = 0;

		while(i < n)
		{
			if (temp[i] == array[i])
				count++;
			i++;
		}

		printf("%d\n",count);
	}
	return (0);
}