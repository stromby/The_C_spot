#include <stdio.h>

int main() {

	int n, count, x, cases;

	cases = 0;
	count = 1;

	scanf("%d", &n);


	while (count <= n)
	{
		scanf("%d", &x);
		if (x >= 10 && x <= 20)
			cases++;
		count++;
	}

	printf("%d in\n", cases);
	printf("%d out\n", n - cases);

    return 0;
}