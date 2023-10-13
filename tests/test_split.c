#include "../libft.h"
#include "minunit.h"


// MU_TEST(test_frase_retorna_strings) {
//     char    *str1 = "Nestor e Pretinho sao lindos";
//     char    *retorno_esperado[] = {"Nestor", "e", "Pretinho", "sao", "lindos", NULL};
//     char    separador = ' ';
//     char    **resultado = ft_split(str1, separador);
//     int     i;

//     i = 0;
//     while (retorno_esperado[i] != NULL)
//     {
//         mu_assert_string_eq(retorno_esperado[i], resultado[i]);
//         i++;
//     }
//     free(*resultado);
//     free(resultado);
// }

MU_TEST(test_vazio_retorna_array_nulo) {
    char    *str2 = "";
    char    separador = ' ';
    char    **resultado = ft_split(str2, separador);

    mu_check(*resultado == NULL);
}

MU_TEST_SUITE(test_suite) {
	// MU_RUN_TEST(test_frase_retorna_strings);
    MU_RUN_TEST(test_vazio_retorna_array_nulo);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}