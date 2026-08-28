#include <stdio.h>

int main() {

	int total, h, m;

	scanf("%d", &total);

	h = total / 3600;

	total = total % 3600;

	m = total / 60;

	total = total % 60;

	printf("%d:%d:%d\n", h, m, total);

    return 0;
}