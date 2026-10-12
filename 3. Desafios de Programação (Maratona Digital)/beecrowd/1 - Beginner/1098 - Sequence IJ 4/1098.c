#include <stdio.h>
#include <math.h>

int main() {

	int i;

	i = 0;

	while (i <= 20)
	{
		if(i % 10 == 0)
			printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i / 10, 1 + i / 10, i / 10, 2 + i / 10, i / 10, 3 + i / 10);
		else
			printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n", i / 10.0, 1 + i / 10.0, i / 10.0, 2 + i / 10.0, i / 10.0, 3 + i / 10.0);
		i = i + 2;
	}

    return 0;
}