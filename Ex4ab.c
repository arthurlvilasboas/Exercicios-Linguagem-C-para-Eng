/* 4. (a) Explique porque esta errado fazer if (num = 10). O que ir´a acontecer?
(b) Escreva um programa que coloque os n´umeros de 1 a 100 na tela na ordem inversa (come¸cando em 100 e
terminando em 1). */


// 4.a Para fazer teste de lógica devemos utilizar == e não = pois isso irá apenas atribuir valor. Ocódigo desejado deve ser escrito assim: if (num==10) ...

// 4.b
#include <stdio.h>
main()
{
    int i;
    for (i=100; i>0; --i)
    printf("%d ", i);
}