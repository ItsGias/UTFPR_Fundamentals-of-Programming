/* 
 * @author Gian Lucas dos Reis
 * @file ex6.c 
 * @date 26/07/2021
 * @brief  Exercicio 6 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez)

int main (){

   float number, i, result;

   printf("Welcome\n");
   
        for (i = 0; i < 10; i++){
        
            printf("Type a number: ");
            scanf("%f", &number);

            result = number * number;
    
            printf("\nThis number squared: %.2f\n", result);
  }//for
    
    return 0; 
}//main