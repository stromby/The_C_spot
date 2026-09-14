#include <stdio.h>

int main(void)
{
	int		t, n, x;

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &n);

		while (n--)
		{
			scanf("%d", &x);

			if (x == 1)
				printf("Rolien\n");
			else if (x == 2)
				printf("Naej\n");
			else if (x == 3)
				printf("Elehcim\n");
			else if (x == 4)
				printf("Odranoel\n");
		}

	}

	return (0);
}