#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, i, j;
	char string[1100], temp[1100];

	scanf("%d", &n);

	while (n--)
	{
		i = 0;

		scanf(" %[^\n]", string);

		while(string[i])
		{
			if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
				string[i] = string[i] + 3;
			i++;
		}

		i--;
		j = 0;

		while (i >= 0)
		{
			temp[j] = string[i];
			j++;
			i--;
		}

		temp[j] = '\0';

		j = j / 2;

		while(temp[j])
		{
			temp[j] = temp[j] - 1;
			j++;
		}

		printf("%s\n", temp);
	}

	return(0);
}