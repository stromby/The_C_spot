#include <stdio.h>

int main(void)
{
	int	n, m, score_r, score_b, score_g;
	char score,  concede;
	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &m);
		score_r = 0;
		score_g = 0;
		score_b = 0;

		while (m--)
		{
			scanf(" %c %c", &score, &concede);

			if (score == 'R')
			{
				if (concede == 'G')
					score_r = score_r + 2;
				else
					score_r++;
			}
			else if (score == 'G')
			{
				if (concede == 'B')
					score_g = score_r + 2;
				else
					score_g++;
			}
			else
			{
				if (concede == 'R')
					score_b = score_r + 2;
				else
					score_b++;
			}
		}
		if (score_r == score_g && score_g == score_b)
			printf("trempate\n");
		else if (score_b > score_g && score_b > score_r)
			printf("blue\n");
		else if (score_r > score_g && score_r > score_b)
			printf("red\n");
		else if (score_g > score_r && score_g > score_b)
			printf("green\n");
		else
			printf("empate\n");
	}
	return (0);
}