// Ex 19

#include <stdio.h>
#include <string.h>

char StrLen (char *str){
int tam = 0;
while (*str){
  tam++;
  str++;
}
return tam;
}

char StrCat (char *prim, char *seg){
char *p;
p = prim+strlen(prim);
while (*seg){
  *p = *seg;
  p++;
  seg++;
}
*p = '\0';
}

int main ()
{
    int t;
    char str1[100], str2[100], str3[200];
    printf ("\n\nDigite uma string para saber o seu tamanho: \n");
    gets (str1);
    t = StrLen(str1);
    printf ("\n A string digitada foi: \n%s\nque possui %d caracteres.",str1,t);
    printf ("\n\nDigite a primeira string para concatenar: \n");
    gets (str1);
    printf ("\n\nDigite a segunda string para concatenar: \n");
    gets (str2);
    str3[0] = '\0';
    StrCat(str3, str1);
    StrCat(str3, str2);
    printf ("\n Voce digitou \n%s",str3);
}