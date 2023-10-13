#include <stdio.h>

#include "test_libft.h"
#include "../libft.h"
#include "colors.h"



int main() {

	char	*function;

	printf(TURNEG "              42 São Paulo\n" RES);
	printf(TUR "Testes Automatizados para o projeto Libft\n" RES);
	printf(PUR "                          Kellynete 2023®\n\n" RES);

	printf("Escreva o nome da função a ser testada (ex.: ft_strlen) ou 'TODAS' para teste completo da biblioteca:\n");
	scanf("%s", function);

	switch (*function) {
		// case 'ft_atoi':
		// 	test_atoi();
		// 	break;
		// case 'ft_bzero':
		// 	test_bzero();
		// case 'ft_calloc':
		// 	test_calloc();
		case "ft_strlen":
			test_strlen();
		// case 'TODAS':
		// 	test_all();

		default:
			break;
	}

}



