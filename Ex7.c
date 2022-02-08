/* 7. Diga se as seguintes expressoes serao verdadeiras ou falsas:
((10>5)||(5>10))
(!(5==6)&&(5!=6)&&((2>1)||(5<=4))) */  
  
 
// 6
#include<stdio.h>
  int main ()
{
    int x, y;
    x = ((10 > 5) || (5 > 10));
    y = (!(5 == 6) && (5 != 6) && ((2 > 1) || (5 <= 4)));
    if (x == 1)
    {
        printf ("\nVerdadeiro");
    }
    else
        printf ("\nFalso");
    if (y == 1)
    {
    printf ("\nVerdadeiro");
    }
    else
    printf ("\nFalso");
    return 0;
}


 
 
