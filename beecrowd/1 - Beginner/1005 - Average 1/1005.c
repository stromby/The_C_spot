#include <stdio.h>

int main() {

	double a, b;

	scanf("%lf%lf", &a, &b);

	printf("MEDIA = %.5lf\n", (a * 35 + b * 75) / 110);

    return 0;
}