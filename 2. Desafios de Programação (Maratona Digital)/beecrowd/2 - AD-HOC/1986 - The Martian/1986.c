#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i;
	char scan[10];

 	char *chars_lowercase[] = {
        "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
        "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"
    };

    char *hex_values[] = {
        "61", "62", "63", "64", "65", "66", "67", "68", "69",
        "6A", "6B", "6C", "6D", "6E", "6F", "70", "71", "72",
        "73", "74", "75", "76", "77", "78", "79", "7A"
    };

	scanf("%d", &n);

	while (n--)
	{
		scanf(" %s", scan);

		i = 0;

		while (strcmp(scan, hex_values[i]))
		{
			i++;
		}

		printf("%s", chars_lowercase[i]);
	}

	printf("\n");

	return (0);
}


