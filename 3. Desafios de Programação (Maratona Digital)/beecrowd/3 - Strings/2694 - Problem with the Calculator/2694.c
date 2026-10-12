#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, j, nb1, nb2, nb3;
	char str[1100], n1[1000], n2[1000], n3[1000];

	scanf("%d",&n);

	while(n--)
	{
		scanf("%s", str);
		i = 0;

		while (str[i] < '0' || str[i] > '9')
			i++;

		j = 0;

		while (str[i] >= '0' && str[i] <= '9')
		{
			n1[j] = str[i];
			i++;
			j++;
		}

		while (str[i] < '0' || str[i] > '9')
			i++;

		j = 0;

		while (str[i] >= '0' && str[i] <= '9')
		{
			n2[j] = str[i];
			i++;
			j++;
		}

		while (str[i] < '0' || str[i] > '9')
			i++;

		j = 0;

		while (str[i] >= '0' && str[i] <= '9')
		{
			n3[j] = str[i];
			i++;
			j++;
		}

		nb1 = atoi(n1);
		nb2 = atoi(n2);
		nb3 = atoi(n3);

		printf("%d\n", nb1 + nb2 + nb3);
	}

	return(0);
}