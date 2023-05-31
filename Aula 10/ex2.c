/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 26/07/2021
 * @brief  Exercicio 2 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que exiba todos números de 100 a 1

int main (){
   
   int accountant = 100;

    for(accountant = 100 ; accountant > 0; accountant--){

      printf("Accountant value: %d\n", accountant);
      usleep(20000);

   }//for


}//main