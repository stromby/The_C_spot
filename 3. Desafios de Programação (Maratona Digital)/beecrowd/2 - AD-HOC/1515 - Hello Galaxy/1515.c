#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, year, distance, min;
	char scan[50];
	char planet[50] = {0};

	distance = 0;

	scanf("%d", &n);

	while (n != 0)
	{
		min = 0;

		scanf("%s%d%d", scan, &year, &distance);

		strcpy(planet, scan);

		min = year - distance;

		n--;

		while (n--)
		{
			scanf("%s %d %d", scan, &year, &distance);

			if ((year - distance) < min )
			{
				min = year - distance;
				bzero(planet, 50);
				strcpy(planet, scan);
			}
		}

		printf("%s\n", planet);

		scanf("%d", &n);
	}

	return(0);
}