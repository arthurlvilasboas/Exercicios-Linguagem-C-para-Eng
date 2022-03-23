// Ex 14

#include <stdio.h>
main()
{
int num, opcao = 0;

while (opcao != 5)
{
       printf("\n\n< Conversao de base >");
       printf("\n  1: decimal para hexadecimal");
       printf("\n  2: hexadecimal para decimal");
       printf("\n  3: decimal para octal");
       printf("\n  4: octal para decimal");
       printf("\n  5: Encerra");

       printf("\n\nInforme sua opcao: ");
       scanf("%d", &opcao);
       if ((opcao > 4)||(opcao <1))
          continue;

       printf("\nDigite o numero para converter: ");
       switch (opcao)
       {
          case 1:
                  scanf("%d", &num);
                  printf("Resultado: %x", num);
          break;
          case 2:
                  scanf("%x", &num);
                  printf("Resultado: %d", num);
          break;
          case 3:
                  scanf("%d", &num);
                  printf("Resultado: %o", num);
          break;
          case 4:
                  scanf("%o", &num);
                  printf("Resultado: %d", num);
          break;
       }
}
}