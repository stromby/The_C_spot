#include <stdio.h>

int main() {

	int start_h, start_m, finish_h, finish_m, duration_h, duration_m;

	scanf("%d%d%d%d", &start_h, &start_m, &finish_h, &finish_m);

	if (start_h == finish_h)
	{
		if (start_m == finish_m)
		{
			printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
			return 0;
		}
		else if (start_m < finish_m)
		{
			printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", finish_m - start_m);
			return 0;
		}
	}

	if (finish_h > start_h)
		duration_h = finish_h - start_h;
	else
		duration_h = 24 - start_h + finish_h;

	if (duration_h == 1 && start_m > finish_m)
	{
		duration_h = 0;
		duration_m = 60 - start_m + finish_m;
	}
	else
	{
		if (start_m > finish_m)
		{
			duration_h = duration_h - 1;
			duration_m = 60 - start_m + finish_m;
		}
		else
			duration_m = finish_m - start_m;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);

    return 0;
}