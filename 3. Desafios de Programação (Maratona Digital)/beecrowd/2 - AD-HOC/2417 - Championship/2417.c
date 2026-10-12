#include <stdio.h>

int main(void)
{
	int wc, tc, gac, wf, tf, gaf;

	scanf("%d %d %d %d %d %d", &wc, &tc, &gac, &wf, &tf, &gaf);

	if ((wc * 3 + tc) > (wf * 3 + tf) )
		printf("C\n");
	else if ((wc * 3 + tc) < (wf * 3 + tf) )
		printf("F\n");
	else
	{
		if (gac > gaf)
			printf("C\n");
		else if (gac < gaf)
			printf("F\n");
		else
			printf("=\n");
	}

	return(0);
}