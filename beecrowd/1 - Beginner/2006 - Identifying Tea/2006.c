#include <stdio.h>

int main() {

	int tea, g1, g2, g3, g4, g5, count;

	count = 0;

	scanf("%d%d%d%d%d%d", &tea, &g1, &g2, &g3, &g4, &g5);

	if (g1 == tea)
		count++;

	if (g2 == tea)
		count++;

	if (g3 == tea)
		count++;

	if (g4 == tea)
		count++;

	if (g5 == tea)
		count++;

	printf("%d\n", count);

    return 0;
}