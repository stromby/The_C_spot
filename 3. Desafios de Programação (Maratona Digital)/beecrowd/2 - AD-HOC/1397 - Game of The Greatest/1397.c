#include <stdio.h>

int main(void)
{
	int n, x, y, win_x, win_y;

	scanf("%d", &n);

	while (n != 0)
	{
		win_x = 0;
		win_y = 0;

		while (n--)
		{
			scanf("%d %d", &x, &y);

			if (x > y)
				win_x++;
			else if (y > x)
				win_y++;
		}

		printf("%d %d\n", win_x, win_y);

		scanf("%d", &n);
	}

	return(0);
}