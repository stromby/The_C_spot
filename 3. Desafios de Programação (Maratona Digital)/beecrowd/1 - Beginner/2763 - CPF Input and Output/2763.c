#include <stdio.h>

int main(void)
{
	char str[20];
	int i;

	scanf("%s", str);

	while (i < 3)
		printf("%c", str[i++]);

	printf("\n");
	i++;

	while (i < 7)
		printf("%c", str[i++]);

	printf("\n");
	i++;

	while (i < 11)
		printf("%c", str[i++]);

	printf("\n");
	i++;

	while (i < 14)
		printf("%c", str[i++]);

	printf("\n");

	return(0);
}