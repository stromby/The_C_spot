#include <stdio.h>

int main() {

	int x;
	float spent;

	scanf("%d%f", &x, &spent);

	printf("%.3lf km/l\n", x / spent);

    return 0;
}