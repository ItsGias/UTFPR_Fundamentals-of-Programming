/*
 * @file: exercicio4.c
 * @date: 13/07/2021
 * @author: Gian lucas dos Reis
 * @Brief: exercicio 4
 */


#include <stdlib.h>
#include <stdio.h>

// Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.

int main(){

int contador = 240;


    while (contador  <=730){
    contador++;
    if(contador % 2 == 0)
        printf("%i\n", contador);
         
    
    }
 
            return 0;

  }
   