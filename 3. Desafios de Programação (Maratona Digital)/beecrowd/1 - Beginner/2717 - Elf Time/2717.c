#include <stdio.h>

int main(void)
{
	int	total, x , y;

	scanf("%d %d %d", &total, &x, &y);

	if (x + y > total)
		printf("Deixa para amanha!\n");
	else
		printf("Farei hoje!\n");

	return(0);
}