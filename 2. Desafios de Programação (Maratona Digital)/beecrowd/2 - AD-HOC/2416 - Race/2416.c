#include <stdio.h>

int main(void)
{
	int total, length;

	scanf("%d %d", &total, &length);

	while (total >= length)
		total = total - length;

	printf("%d\n", total);

	return(0);
}