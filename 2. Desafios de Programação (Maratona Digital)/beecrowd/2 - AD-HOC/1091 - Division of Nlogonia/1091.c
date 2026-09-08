#include <stdio.h>

int main(void)
{
	int n, og_x, og_y, home_x, home_y;

	scanf("%d", &n);

	while (n != 0)
	{
		scanf("%d %d", &og_x, &og_y);

		while (n--)
		{
			scanf("%d %d", &home_x, &home_y);

			if (og_x == home_x || og_y == home_y)
				printf("divisa\n");
			else if (og_x < home_x && og_y < home_y)
				printf("NE\n");
			else if (og_x < home_x && og_y > home_y)
				printf("SE\n");
			else if (og_x > home_x && og_y < home_y)
				printf("NO\n");
			else if (og_x > home_x && og_y > home_y)
				printf("SO\n");
		}

		scanf("%d", &n);
	}

	return(0);
}