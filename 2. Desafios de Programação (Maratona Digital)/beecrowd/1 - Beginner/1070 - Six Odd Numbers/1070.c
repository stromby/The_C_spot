#include <stdio.h>

int main() {

	int count, x;

	count = 1;

	scanf("%d", &x);

	while (count < 7)
	{
		if (x % 2 != 0)
		{
			printf("%d\n", x);
			count++;
		}
		x++;
	}

    return 0;
}