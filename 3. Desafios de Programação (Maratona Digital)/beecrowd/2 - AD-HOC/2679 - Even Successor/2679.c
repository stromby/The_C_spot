#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d",&a);

	if (a % 2 == 0)
		printf("%d\n", a + 2);
	else
		printf("%d\n", a + 1);

	return(0);
}