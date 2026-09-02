#include <stdio.h>

int main()
{
	int x, y, temp;

	scanf("%d%d", &x, &y);

	if (x > y){temp = x; x = y; y = temp;}

	x++;

	while (x < y)
	{
		if (x % 5 == 2 || x % 5 == 3)
			printf("%d\n", x);;
		x++;
	}

    return 0;
}