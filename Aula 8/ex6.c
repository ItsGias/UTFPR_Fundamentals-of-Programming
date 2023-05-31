/*
 * @file: ex6.c
 * @date: 13/07/2021
 * @author: Gian lucas dos Reis
 * @Brief: exercicio 6
 */


#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba um número real, calcule e exiba o quadrado dele. 
 * O programa deverá calcular o quadrado de vários números e finalizar quando 
 * for digitado um número negativo ou zero.
 */

int main () {
   
   int numero;
   int resultado;
    
     printf("Type a Real Number: ");
     scanf("%i", &numero);

     while(numero> 0)
     {
         resultado = numero * numero;
          printf("\nO numero %i elevado ao quadrado eh: %i\n", numero, resultado);
                printf("\nInsira outro numero: ");
                scanf("%i", &numero);

     }
     







    return 0;
}
