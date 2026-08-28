#include <unistd.h>

void hm_putnbr(int nb);

int main() {

	int i;

	i = 1;

	while(i < 101)
	{
		if (i % 2 == 0)
		{
			hm_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}

    return 0;
}

void hm_putnbr(int nb)
{
	long n;

	n = nb;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	if (n > 9)
		hm_putnbr(n / 10);
	write (1, (char[]){n % 10 + '0'}, 1);
}