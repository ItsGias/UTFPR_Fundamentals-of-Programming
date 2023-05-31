/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 26/07/2021
 * @brief  Exercicio 3 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que exiba todos os números múltiplos de 5 no intervalo de 1 a 500.

int main (){

    int i = 1;

    printf ("Here are the numbers that are multiple of 5\n");

    for ( i = 1; i < 501; i++)
     {
        if (i % 5 == 0)
        
      {            
            printf("%d \n", i);
            usleep(200000);
    }//if            
  }//for
}//main