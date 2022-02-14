#include <stdio.h>
#include <string.h>

int
main ()
{
  char str[100];
  char inv[100];
  int i, j = 0;
  printf ("\nDigite uma string\n");
  gets (str);
  i = strlen (str) - 1;
  //printf ("Sua string: %s\n", &str); teste1
  while (i >= 0)
    {
      inv[j] = str[i];
      //printf("%c",inv[j]); teste2
      j++;
      i--;
    }
  printf ("\nString invertida: %s", inv);
  return (0);
}
