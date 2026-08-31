#include <stdio.h>

int main() {

	int x, y, result;

	result = 0;

	scanf("%d%d", &x, &y);

	if (x < y)
	{
		x++;
		while (x < y)
		{
			if (x % 2 != 0)
				result = result + x;
			x++;
		}
	}
	else
	{
		y++;
		while (y < x)
		{
			if (y % 2 != 0)
				result = result + y;
			y++;
		}
	}

	printf("%d\n", result);

    return 0;
}