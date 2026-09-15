#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, i5, o1, o2, o3, o4, o5;

	scanf("%d %d %d %d %d", &i1, &i2, &i3, &i4, &i5);

	scanf("%d %d %d %d %d", &o1, &o2, &o3, &o4, &o5);

	if (i1 == o1 || i2 == o2 || i3 == o3 || i4 == o4 || i5 == o5)
		printf("N\n");
	else
		printf("Y\n");


	return(0);
}