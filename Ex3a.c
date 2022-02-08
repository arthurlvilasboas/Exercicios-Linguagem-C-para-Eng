/* 3. (a) Escreva um programa que leia um caracter digitado pelo usuario, imprima o caracter digitado e o codigo
ASCII correspondente a este caracter. */

// 3. a
#include <stdio.h>
int main ()
{
  char x;
  scanf ("%c", &x);
  printf ("\nCaracter digitado: %c \nCC3digo ASCII:%d\n", x, x);
}
