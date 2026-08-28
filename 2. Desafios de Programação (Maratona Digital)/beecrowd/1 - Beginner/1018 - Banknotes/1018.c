#include <stdio.h>

int main() {

	int total, start;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

	scanf("%d", &total);

	start = total;

	n100 = total / 100;

	total = total % 100;

	n50 = total / 50;

	total = total % 50;

	n20 = total / 20;

	total = total % 20;

	n10 = total / 10;

	total = total % 10;

	n5 = total / 5;

	total = total % 5;

	n2 = total / 2;

	total = total % 2;

	n1 = total / 1;

	total = total % 1;

	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", start, n100, n50, n20, n10, n5, n2, n1);

    return 0;
}