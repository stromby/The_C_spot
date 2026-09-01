#include <stdio.h>

int main() {

	int start_d, start_h, start_m, start_s, start_total_s, finish_d, finish_h, finish_m, finish_s, finish_total_s, duration_s, d, rest_d, h, rest_h, m, s;

	scanf("Dia %d", &start_d);
	scanf("%d : %d : %d", &start_h, &start_m, &start_s);

	scanf(" Dia %d", &finish_d);
	scanf("%d : %d : %d", &finish_h, &finish_m, &finish_s);

	start_total_s = start_d * (60 * 60 * 24) + start_h * (60 * 60) + start_m * 60 + start_s;
	finish_total_s = finish_d * (60 * 60 * 24) + finish_h * (60 * 60) + finish_m * 60 + finish_s;

	duration_s = finish_total_s - start_total_s;

	d = duration_s / (60 * 60 * 24);
	rest_d = duration_s % (60 * 60 * 24);
	h = rest_d / (60*60);
	rest_h = rest_d % (60*60);
	m = rest_h / 60;
	s = rest_h % 60;

	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);

    return 0;
}