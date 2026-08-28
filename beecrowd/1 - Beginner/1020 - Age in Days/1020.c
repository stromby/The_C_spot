#include <stdio.h>

int main() {

	int total, anos, meses;

	scanf("%d", &total);

	anos = total / 365;

	total = total % 365;

	meses = total / 30;

	total = total % 30;

	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", total);

    return 0;
}