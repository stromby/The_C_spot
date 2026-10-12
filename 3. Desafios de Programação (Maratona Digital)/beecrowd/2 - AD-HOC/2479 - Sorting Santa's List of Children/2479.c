#include <stdio.h>
#include <string.h>

void sort(char name[][25], int n)
{
	int i;
	char temp[25];

	while (n > 1)
	{
		i = 0;
		while (i < n -1)
		{
			if (strcmp(name[i], name[i + 1]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[i + 1]);
				strcpy(name[i + 1], temp);
			}
			i++;
		}
		n--;
	}
}

int main(void)
{
	int n, good, i;
	char signal;
	char name[110][25];

	scanf("%d", &n);

	i = 0;
	good = 0;

	while(i < n)
	{

		scanf(" %c %s", &signal, name[i]);

		if (signal == '+')
			good++;
		i++;
	}

	i = 0;

	sort(name, n);

	while (i < n)
	{
		printf("%s\n", name[i]);
		i++;
	}

	printf("Se comportaram: %d | Nao se comportaram: %d\n", good, n - good);

	return(0);
}