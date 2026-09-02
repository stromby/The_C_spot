#include <stdio.h>

int main()
{
	int x, y, temp, result;

	result = 0;

	scanf("%d%d", &x, &y);

	if (x > y){temp = x; x = y; y = temp;}

	while (x <= y)
	{
		if (x % 13 != 0)
			result += x;
		x++;
	}

	printf("%d\n", result);

    return 0;
}