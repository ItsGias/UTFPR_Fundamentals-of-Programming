/* 
 * @author Gian Lucas dos Reis
 * @file ex9.c 
 * @date 27/07/2021
 * @brief  Exercicio 9 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

//Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

int main (){

int n;
  
  printf("Type the size that you want: ");  
  scanf("%i",&n);
  
     for (int i = 1; i <= n; i++) {
       
            for (int j = 1; j <= n; j++) {
                printf("#");   
        }// second for
       
       printf("\n");
     
     }//first for
                               return 0;
}//main