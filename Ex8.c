/* 8. Faca um programa que apresente na tela a tabela de conversao de graus Celsius para Fahrenheit, de −100C a
100C. Use um incremento de 10C. Utilize a formula de conversao TFarenheit = (9F/5ºC) ∗ TCelsius + 32F . */  
  
 
// 8
#include<stdio.h>

int main(){
    int TC=0, TF=0;
    for(TC=-100;TC<101;TC=TC+10){
        TF = ((TC*9/5)+32);
        printf("\n %d C = %d F",TC,TF);
}
    return 0;
}


 
 
