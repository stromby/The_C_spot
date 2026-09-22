#include <stdio.h>

int main(void)
{
	char s[120];
	int i, total;

	i = 0;
	total = 0;

	scanf("%s", s);

	while (s[i])
	{
		if (s[i] == '1')
			total++;
		i++;
	}

	if (total % 2 == 0)
		printf("%s0\n", s);
	else
		printf("%s1\n", s);

	return (0);
}