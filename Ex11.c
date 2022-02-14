#include <stdio.h>
#include <string.h>

int
main ()
{
  char str[100];
  char inv[100];
  int i, j=0;
  printf ("\nDigite uma string\n");
  gets (str);
  //printf ("Sua string: %s\n", &str);
  for (i = strlen(str)-1; i>=0; i--)
    {
      inv[j]=str[i];
      //printf("%c",inv[j]);
      j++;
    }
  printf ("\nString invertida: %s", inv);
  return (0);
}
