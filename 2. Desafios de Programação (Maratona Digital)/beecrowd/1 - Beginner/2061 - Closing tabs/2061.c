#include <stdio.h>
#include <string.h>

int main(void)
{
	int		tabs, clicks;
	char action[10];

	scanf("%d %d", &tabs, &clicks);

	while (clicks--)
	{
		scanf(" %s", action);

		if (strcmp(action, "fechou") == 0)
			tabs++;
		else
			tabs--;

	}

	printf("%d\n", tabs);

	return (0);
}