#include <stdio.h>

int main(void)
{
	int x, result, count;

	scanf("%d", &x);

	while (x != 0)
	{
		result = 0;
		count = 1;

		while (count < 6)
		{
			if (x % 2 == 0)
			{
				result = result + x;
				count++;
			}
			x++;
		}

		printf("%d\n",result);

		scanf("%d", &x);
	}

	return(0);
}