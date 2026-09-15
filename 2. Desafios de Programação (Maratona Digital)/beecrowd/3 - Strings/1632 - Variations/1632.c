#include <stdio.h>

int main(void)
{
	int n, var, i;
	char pass[100];

	scanf("%d", &n);

	while (n--)
	{
		scanf(" %s", pass);
		i = 0;
		var = 1;

		while (pass[i])
		{
			if (pass[i] == 'A' || pass[i] == 'a' || pass[i] == 'E' || pass[i] == 'e' || pass[i] == 'I' || pass[i] == 'i' || pass[i] == 'O' || pass[i] == 'o' || pass[i] == 'S' || pass[i] == 's')
				var = var * 3;
			else
				var = var * 2;
			i++;
		}

		printf("%d\n", var);
	}

	return(0);
}