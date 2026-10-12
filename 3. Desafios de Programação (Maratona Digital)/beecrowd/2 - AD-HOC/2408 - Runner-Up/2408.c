#include <stdio.h>

int main(void)
{
	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);

	if ((x > y && x < z) || (x > z && x < y))
		printf("%d\n", x);
	else if ((y > x && y < z) || (y > z && y < x))
		printf("%d\n", y);
	else
		printf("%d\n", z);
	return(0);
}