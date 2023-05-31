/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 13/07/2021
 * @brief  Exercicio 3 da aula 8
 */


#include <stdlib.h>
#include <stdio.h>

//Crie um algoritmo que exiba todos os números múltiplos de 3 no intervalo de 1 a 322.

int main () {
 
    int contador = 0;

     while (contador  <=322){
    contador++;
    if(contador % 3 == 0)
        printf("%i\n", contador);
  
  
  } 
    return 0;
}