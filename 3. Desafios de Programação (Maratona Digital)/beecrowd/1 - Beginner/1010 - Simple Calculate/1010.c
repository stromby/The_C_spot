#include <stdio.h>

int main() {

	int code, units;
	float price, total;


	scanf("%d%d%f", &code, &units, &price);

	total = units * price;

	scanf("%d%d%f", &code, &units, &price);

	total = total + units * price;


	printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}