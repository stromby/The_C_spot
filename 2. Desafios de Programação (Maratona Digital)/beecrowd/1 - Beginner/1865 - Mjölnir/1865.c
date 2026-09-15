#include <stdio.h>
#include <string.h>

int main(void)
{
	int		n, force;
	char name[100];

	scanf(" %d", &n);

	while (n--)
	{
		scanf(" %s %d", name, &force);

		if (strcmp(name, "Thor"))
			printf("N");
		else
			printf("Y");

		printf("\n");
	}
	return (0);
}