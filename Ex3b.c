/* 3. (b) Escreva um programa que leia duas strings e as coloque na tela. Imprima tambB4em a segunda letra de cada
string. */


// 3. b
#include <stdio.h>
int main ()
{
  char x[50], y[50];
  fflush (stdin);
  printf ("\nDigite a primeira string:\n");
  gets (x);
  printf ("\nPrimeira string:\n%s\nSegunda string:\n%s", x, y);
  printf ("Digite a segunda string:\n");
  gets (y);
  printf ("\nPrimeira string:\n%s\nSegunda string:\n%s", x, y);
  printf ("\nSegunda letra da primeira string: %c", x[1]);
  printf ("\nSegunda letra da segunda string: %c", y[1]);
}
