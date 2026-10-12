#include <stdio.h>

int main(void)
{
	int students, total, tries;

	scanf("%d %d %d", &students, &total, &tries);

	if (students * tries <= total)
		printf("S\n");
	else
		printf("N\n");

	return(0);
}