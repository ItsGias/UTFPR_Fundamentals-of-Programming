/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 28/07/2021
 * @brief  ex 1 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia e armazene dois vetores de tamanho 5. Ao final o programa deve calcular e exibir o vetor soma;

int main () {

    int value_1 [5], value_2 [5], result;
    int i = 0;

    printf ("Welcome again!\n");

    for (i = 0; i < 5; i++){    
        printf ("\nType a value to the [%i] equation: ", i);
        scanf ("%d", &value_1[i]);
        printf ("Type another value to the [%i] equation: ", i);
        scanf ("%d", &value_2[i]);
    }// main for
    
        for (i = 0; i < 5; i++){  
            result = value_1 [i] + value_2 [i];
            printf ("\nThe sum between the numbers of the equation [%i] is: %d\n",i , result);
        }// internal for


    return 0;
}// main