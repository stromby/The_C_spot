#include <stdio.h>

int main() {

	int i;
	char *meses[] = {"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"};

	scanf("%d", &i);

	if (i < 1 || i > 12)
		return 0;

	printf("%s\n", meses[i - 1]);

    return 0;
}