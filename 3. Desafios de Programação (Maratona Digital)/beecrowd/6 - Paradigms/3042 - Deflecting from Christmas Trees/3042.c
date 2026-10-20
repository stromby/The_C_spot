#include <stdio.h>

int main(void)
{
	int n, x, y, z, position, count;

	scanf("%d", &n);

	while (n != 0)
	{

		position = 1;
		count = 0;

		while (n--)
		{
			scanf("%d %d %d", &x, &y, &z);

			if (x == 0 && y == 0 && z == 0)
				continue;

			if (position == 0 && y == 0)
			{
				count++;
				position = 1;
			}
			else if (position == 0 && z == 0)
			{
				count += 2;
				position = 2;
			}
			else if (position == 1 && x == 0)
			{
				count ++;
				position = 0;
			}
			else if (position == 1 && z == 0)
			{
				count ++;
				position = 2;
			}
			else if (position == 2 && y == 0)
			{
				count++;
				position = 1;
			}
			else if (position == 2 && x == 0)
			{
				count += 2;
				position = 0;
			}

		}

		printf("%d\n", count);

		scanf("%d", &n);
	}
	return(0);
}