#include <stdio.h>
#include <unistd.h>

int main() {

	int pass;

	scanf("%d", &pass);

	while (pass != 2002)
	{
		write(1,"Senha Invalida\n",15);

		scanf("%d", &pass);
	}
	write (1, "Acesso Permitido\n", 17);

    return 0;
}