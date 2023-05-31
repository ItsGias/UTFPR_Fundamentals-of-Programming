/* 
 * @author Gian Lucas dos Reis
 * @file ex4.c 
 * @date 26/07/2021
 * @brief  Exercicio 4 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

//Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.


int main (){

     int i = 1;

    printf ("Here are the pair numbers between 240 and 730\n");

    for ( i = 240; i < 731; i++)
     {
        if (i % 2 == 0)
        
      {            
            printf("%d \n", i);
            usleep(200000);
    }//if            

  }//for

}//main