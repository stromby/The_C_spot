#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, flag;
	char big[1002] = {0}, small[1002] = {0};

	scanf("%d", &n);

	while (n--)
	{
		flag = 1;

		scanf("%s %s", big, small);

		if (strlen(big) < strlen(small))
			flag = 0;
		else
		{
			if (strcmp(&big[strlen(big) - strlen(small)], small) != 0)
				flag = 0;
		}

		if (flag == 1)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}

	return(0);
}