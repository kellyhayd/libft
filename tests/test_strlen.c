#include "test_libft.h"
#include "../libft.h"

#include <stdlib.h>
#include <assert.h>

size_t	ft_strlen(const char *s);

int test_ft_strlen(void)
{
  char *str1 = "Hello, world!";
  char *str2 = "";
  char *str3 = "1234567890";

  // Teste 1: String válida
  assert(ft_strlen(str1) == 13);

  // Teste 2: String vazia
  assert(ft_strlen(str2) == 0);

  // Teste 3: String de números
  assert(ft_strlen(str3) == 10);

  // Teste 4: String com um caractere
  char *str4 = "a";
  assert(ft_strlen(str4) == 1);

  // Teste 5: String com dois caracteres
  char *str5 = "ab";
  assert(ft_strlen(str5) == 2);

  // Teste 6: String com três caracteres
  char *str6 = "abc";
  assert(ft_strlen(str6) == 3);

  return 0;
}

int main(void)
{
  test_ft_strlen();

  return 0;
}
