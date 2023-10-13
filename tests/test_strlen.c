#include "test_libft.h"
#include "../libft.h"
#include "colors.h"

#include <stdlib.h>
#include <assert.h>
#include <stddef.h>

// size_t	ft_strlen(const char *s);

int  test1_strlen(void) {
  char *str1 = "Hello, world!";
  int   answer;
  int   expected;

  answer = ft_strlen(str1);
  expected = 13;
  if (answer == expected) {
    printf(GREEN "OK " RES);
    return (1);
  }
  else {
    printf(RED "KO " RES);
    return (answer);
  }
}

int  test2_strlen(void) {
  char *str2 = "";
  int   answer;
  int   expected;

  answer = ft_strlen(str2);
  expected = 0;
  if (answer == expected) {
    printf(GREEN "OK " RES);
    return (1);
  }
  else {
    printf(RED "KO " RES);
    return (answer);
  }
}

int  test3_strlen(void) {
  char *str3 = "1234567890";
  int   answer;
  int   expected;

  answer = ft_strlen(str3);
  expected = 10;
  if (answer == expected) {
    printf(GREEN "OK\n" RES);
    return (1);
  }
  else {
    printf(RED "KO " RES);
    return (answer);
  }
}

void  test_strlen(void) {
  int a;
  int b;
  int c;

  a = test1_strlen();
  b = test2_strlen();
  c = test3_strlen();

  if (a != 1) {
    printf(RED "String testada: 'Hello, world!'\n" RES);
    printf(RED "Resultado = %d | Esperado = 13\n" RES, a);
  }
  if (b != 1) {
    printf(RED "String testada: -vazia-\n" RES);
    printf(RED "Resultado = %d | Esperado = 0\n" RES, b);
  }
  if (c != 1) {
    printf(RED "String testada: '1234567890'\n" RES);
    printf(RED "Resultado = %d | Esperado = 10\n" RES, c);
  }
}
