#include <stdio.h>

int main(void)
{
	int n, time, speed, total;

	scanf("%d", &n);

	total = 0;

	while (n--)
	{
		scanf("%d %d", &time, &speed);

		total = total + time * speed;
	}

	printf("%d\n", total);


	return(0);
}