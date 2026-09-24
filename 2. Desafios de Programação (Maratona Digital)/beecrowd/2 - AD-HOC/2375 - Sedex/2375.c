#include <stdio.h>

int main(void)
{
	int n, x, y, z;

	scanf("%d", &n);

	scanf("%d %d %d", &x, &y, &z);

	if (n > x || n > y || n > z)
		printf("N\n");
	else
		printf("S\n");

	return(0);
}