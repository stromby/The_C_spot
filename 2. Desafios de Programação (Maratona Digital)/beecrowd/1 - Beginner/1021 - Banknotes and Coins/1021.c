#include <stdio.h>
#include <math.h>

int main() {

	float scan;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
	int m100 = 0, m050 = 0, m025 = 0, m010 = 0, m005 = 0, m001 = 0;

	scanf("%f", &scan);

	int total = (int) round(scan * 100.0);

	n100 = total / 10000;

	total = fmod(total, 10000);

	n50 = total / 5000;

	total = fmod(total, 5000);

	n20 = total / 2000;

	total = fmod(total, 2000);

	n10 = total / 1000;

	total = fmod(total, 1000);

	n5 = total / 500;

	total = fmod(total, 500);

	n2 = total / 200;

	total = fmod(total, 200);

	m100 = total / 100;

	total = fmod(total, 100);

	m050 = total / 50;

	total = fmod(total, 50);

	m025 = total / 25;

	total = fmod(total, 25);

	m010 = total / 10;

	total = fmod(total, 10);

	m005 = total / 5;

	total = fmod(total, 5);

	m001 = total / 1;

	total = fmod(total, 1);

	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m100, m050, m025, m010, m005, m001);

    return 0;
}