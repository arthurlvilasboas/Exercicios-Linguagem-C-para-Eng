#include <stdio.h>

int
main ()
{
  int n;
  printf ("\nDigite o numero correpondente a um dia da semana\n");
  printf
    ("1=domingo\n2=segunda\n3=terca\n4=quarta\n5=quinta\n6=sexta\n7=sabado\n");
  scanf ("%d", &n);
  printf ("Voce digitou: ");
  if (n == 1)
    {
      printf ("Domingo");
    }
  else if (n == 2)
    {
      printf ("segunda");
    }
  else if (n == 3)
    {
      printf ("terca");
    }
  else if (n == 4)
    {
      printf ("quarta");
    }
  else if (n == 5)
    {
      printf ("quinta");
    }
  else if (n == 6)
    {
      printf ("sexta");
    }
  else if (n == 7)
    {
      printf ("sabado");
    }
  else
    printf ("Erro: sC3 existem 7 dias na semana");
  return (0);
}
