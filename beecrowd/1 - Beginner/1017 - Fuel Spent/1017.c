#include <stdio.h>

int main() {

	int time, speed;

	float total;

	scanf("%d%d", &time, &speed);

	total = time * speed;

	printf("%.3f\n", total / 12);

    return 0;
}