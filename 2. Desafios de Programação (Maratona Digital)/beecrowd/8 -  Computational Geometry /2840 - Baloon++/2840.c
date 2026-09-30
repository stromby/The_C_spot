#include <stdio.h>

int main(void)
{
	int	r, liters, total;
	float volume, pi;

	pi = 3.1415f;

	scanf("%d %d", &r, &liters);

	{
		volume = (4.0f / 3.0f) * pi * (r * r *r);

		total = (int)(liters / volume);
		printf("%d\n", total);
	}

	return (0);
}