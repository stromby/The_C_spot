#include <stdio.h>

int main() {

	float salary, raise;

	raise = 0;

	scanf("%f", &salary);

	if (salary > 0 && salary <= 400)
		raise = 0.15;
	else if (salary > 400 && salary <= 800)
		raise = 0.12;
	else if (salary > 800 && salary <= 1200)
		raise = 0.10;
	else if (salary > 1200 && salary <= 2000)
		raise = 0.07;
	else
		raise = 0.04;

	printf("Novo salario: %.2f\n", salary + raise * salary);
	printf("Reajuste ganho: %.2f\n", raise * salary);
	printf("Em percentual: %.0f %%\n", raise * 100);

    return 0;
}