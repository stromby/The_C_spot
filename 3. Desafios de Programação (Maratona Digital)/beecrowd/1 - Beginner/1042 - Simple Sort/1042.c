#include <stdio.h>

int main() {

	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	if (x < y && x < z)
	{
		printf("%d\n", x);
		if (y < z)
			printf("%d\n%d\n", y, z);
		else
			printf("%d\n%d\n", z, y);
	}

	else if (y < x && y < z)
	{
		printf("%d\n", y);
		if (x < z)
			printf("%d\n%d\n", x, z);
		else
			printf("%d\n%d\n", z, x);
	}

	else
	{
		printf("%d\n", z);
		if (x < y)
			printf("%d\n%d\n", x, y);
		else
			printf("%d\n%d\n", y, x);
	}

	printf("\n%d\n%d\n%d\n", x , y, z);

    return 0;
}