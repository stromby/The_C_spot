#include <stdio.h>
#include <stdlib.h>

int hm_maior(int a, int b)
{
	return ((a+ b + abs(a-b))/2);
}


int main() {

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	printf("%d eh o maior\n", hm_maior(a, hm_maior(b, c)));

    return 0;
}