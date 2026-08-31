#include <stdio.h>

int main() {

	int i, j;

	i = 1;
	j = 7;

	while (i <= 9)
	{
		printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i, j, i, j - 1, i, j - 2);
		i+=2;
		j+=2;
	}

    return 0;
}