#include <stdio.h>

int main(void)
{
	int nota_1, media;

	scanf("%d %d", &nota_1, &media);

	printf("%d\n", media * 2 - nota_1);

	return(0);
}