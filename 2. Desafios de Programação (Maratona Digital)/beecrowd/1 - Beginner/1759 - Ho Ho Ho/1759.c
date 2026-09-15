#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	while (n--)
	{
		printf("Ho");
		if (n)
			printf(" ");
	}

	printf("!\n");

	return(0);
}