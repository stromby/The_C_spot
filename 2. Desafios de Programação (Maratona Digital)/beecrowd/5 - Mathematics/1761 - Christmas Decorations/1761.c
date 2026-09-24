#include <stdio.h>
#include <math.h>

int main(void)
{
	double	angle, dist, height_elf, pi, height_tree, tang;

	pi = 3.141592654;

	while (scanf(" %lf %lf %lf", &angle, &dist, &height_elf) == 3)
	{
		tang = tan(angle * (pi / 180.0));
		height_tree = height_elf + (dist * tang);
		printf("%.2lf\n", 5 * height_tree);
	}

	return (0);
}