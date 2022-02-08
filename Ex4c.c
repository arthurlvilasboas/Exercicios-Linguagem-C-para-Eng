/* 4. (c) Escreva um programa que leia uma string, conte quantos caracteres desta string s˜ao iguais a ’a’ e substitua
os que forem iguais a ’a’ por ’b’. O programa deve imprimir o n´umero de caracteres modificados e a string
modificada. */


// 4.c
#include <stdio.h>
int main()
{
    char x[99];
    int i, contagem = 0;
    printf("\nDigite uma string para trocar seus a por b:\n");
    gets(x);
    for (i=0;i<100;i++) {
        if (x[i]=='a') {
        x[i] = 'b';
        contagem ++;
        }
    }
    printf("\nNova string:\n%s\nNumero de a trocados por b:\n%d",x,contagem);
}