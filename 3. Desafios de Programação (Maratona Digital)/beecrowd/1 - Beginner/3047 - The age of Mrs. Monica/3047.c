#include <stdio.h>

int main(void)
{
	int mom, x, y, z;

	scanf("%d %d %d", &mom, &y, &z);

	x = mom - y - z;

	if (x > y && x > z)
		printf("%d\n", x);
	else if (y > x && y > z)
		printf("%d\n", y);
	else
		printf("%d\n", z);

	return(0);
}