#include "../libft.h"
#include "minunit.h"


MU_TEST(test_frase_retorna_strings) {
    char    *str1 = "Nestor e Pretinho sao lindos";
    char    *retorno_esperado[] = {"Nestor", "e", "Pretinho", "sao", "lindos", NULL};
    char    separador = ' ';
    char    **resultado = ft_split(str1, separador);
    int     i;

    i = 0;
    while (retorno_esperado[i] != NULL)
    {
        mu_assert_string_eq(retorno_esperado[i], *resultado);
        i++;
        resultado++;
    }
}

MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_frase_retorna_strings);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}