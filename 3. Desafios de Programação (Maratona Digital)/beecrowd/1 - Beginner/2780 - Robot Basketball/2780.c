#include <stdio.h>

int main(void)
{
	int	x;

	scanf("%d", &x);

	if (x <= 800)
		printf("1\n");
	else if (x <= 1400)
		printf("2\n");
	else
		printf("3\n");
	return(0);
}