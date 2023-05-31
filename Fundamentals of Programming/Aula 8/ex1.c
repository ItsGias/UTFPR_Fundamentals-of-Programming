/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 13/07/2021
 * @brief  Exercicio 1 da aula 8
 */


#include <stdlib.h>
#include <stdio.h>

//Faça um algoritmo que exiba todos números de 1 a 100.

int main () {
 
    int contador = 0;

    while (contador <= 100)
    {
        printf("%i\n", contador);
        contador++;
    }
    
    return 0;
}