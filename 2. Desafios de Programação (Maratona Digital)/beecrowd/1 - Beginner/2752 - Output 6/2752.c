#include <stdio.h>

int main(void)
{

	char array[50] = "AMO FAZER EXERCICIO NO URI";

	printf("<%s>\n", array);
	printf("<%30s>\n", array);
	printf("<%.20s>\n", array);
	printf("<%-20s>\n", array);
	printf("<%-30s>\n", array);
	printf("<%.30s>\n", array);
	printf("<%30.20s>\n", array);
	printf("<%-30.20s>\n", array);

	return(0);
}