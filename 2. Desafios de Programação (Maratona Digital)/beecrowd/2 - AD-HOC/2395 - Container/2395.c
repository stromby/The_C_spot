#include <stdio.h>

int main(void)
{
	int xc, yc, zc, xs, ys,zs;

	scanf("%d %d %d", &xc, &yc, &zc);
	scanf("%d %d %d", &xs, &ys, &zs);

	printf("%d\n", (xs / xc) * (ys / yc) * (zs / zc));

	return(0);
}