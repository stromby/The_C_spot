#include <stdio.h>

int main() {

	int number, worked_h;
	float earn_h;

	scanf("%d%d%f", &number, &worked_h, &earn_h);

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number , worked_h * earn_h);

    return 0;
}