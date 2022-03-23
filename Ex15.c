// Ex 15

#include <stdio.h>
#include <string.h>

int main()
{
int aux, n = 15;
char str1[n], str2[n], str3[n], str4[n];
char str[n*4];

printf("\n\n Digite 4 strings, teclando <ENTER> ao final de cada uma:\n");
gets(str1);
gets(str2);
gets(str3);
gets(str4);

str[0] = '\0';

strcat(str, str1);
strcat(str, str2);
strcat(str, str3);
strcat(str, str4);

printf("\n\n Strings concatenadas: %s\n",str);
}