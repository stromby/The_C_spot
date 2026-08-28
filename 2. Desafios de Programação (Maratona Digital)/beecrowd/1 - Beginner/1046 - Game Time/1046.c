#include <stdio.h>

int main() {

	int start, finish, duration;

	scanf("%d%d", &start, &finish);

	if (start == finish)
		duration = 24;
	else if (finish > start)
		duration = finish - start;
	else
		duration = 24 - start + finish;

	printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}