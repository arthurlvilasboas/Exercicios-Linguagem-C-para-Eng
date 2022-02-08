/* 5. Escreva um programa que declare uma vari´avel inteira global e atribua o valor 10 a ela. Declare outras 5 vari´aveis
inteiras locais ao programa principal e atribua os valores 20, 30, ..., 60 a elas. Declare 6 vari´aveis caracteres e
atribua a elas as letras c, o, e, l, h, a. Finalmente, o programa dever´a imprimir, usando todas as vari´aveis declaradas: As vari´aveis inteiras contem os n´umeros: 10, 20, 30, 40, 50, 60. O animal contido nas vari´aveis caracteres
e a coelha. */


// 5
#include <stdio.h>

int i = 10;

main ()
{
  int j1 = 20, j2 = 30, j3 = 40, j4 = 50, j5 = 60;
  char k1 = 'c', k2 = 'o', k3 = 'e', k4 = 'l', k5 = 'h', k6 = 'a';
  printf ("\nAs variaveis inteiras contem os numeros: %d, %d, %d, %d, %d, %d",
	  i, j1, j2, j3, j4, j5);
  printf ("\nO animal contido nas variaveis caracteres e a %c%c%c%c%c%c",
	  k1, k2, k3, k4, k5, k6);
  return 0;
}