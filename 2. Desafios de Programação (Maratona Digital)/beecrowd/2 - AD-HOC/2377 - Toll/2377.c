#include <stdio.h>

int main(void)
{
	int total, partial, cost_km, toll_cost, total_tolls;

	scanf("%d %d", &total, &partial);

	scanf("%d %d", &cost_km, &toll_cost);

	total_tolls = total / partial * toll_cost;

	printf("%d\n", cost_km * total + total_tolls);

	return(0);
}