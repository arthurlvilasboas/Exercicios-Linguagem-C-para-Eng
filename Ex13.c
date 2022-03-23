//Ex13

#include <stdio.h>

int
main ()
{
  int dia, mes, ano, i, numdias=0;
int diasmeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
while ((ano < 1900) || (ano > 2100)){
  printf ("\nDigite um ano \n");
  scanf ("%d",&ano);
  }

  while ((mes > 12) || (mes < 1)){
  printf ("\nDigite um mes \n");
  scanf ("%d",&mes);
  }
  while ((dia > 31) || (dia < 1)){
  printf ("\nDigite um dia \n");
  scanf ("%d",&dia);
  if(mes==2&&dia>28) {
  dia=0;
  }
  }
  

  printf ("\ndia:%d mes:%d ano:%d \n",dia,mes,ano);
  


if ( ((ano%4) == 0) && ((ano%100) != 0) || (ano%400 == 0)) /* Se e bissexto */
  if (mes > 2) ndias += 1;


for (i=0; i< (mes-1); i++)
  numdias += diasmeses[i];

printf("\nDia Numero: %d", numdias);
  return (0);
}