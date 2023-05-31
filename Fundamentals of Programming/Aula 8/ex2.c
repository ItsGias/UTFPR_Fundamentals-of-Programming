/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 13/07/2021
 * @brief  Exercicio 2 da aula 8
 */


#include <stdlib.h>
#include <stdio.h>

//Faça um algoritmo que exiba todos números de 100 a 1

int main () {
 
    int contador = 100;

    while (contador >= 1)
    {
        printf("%i\n", contador);
        contador--;
    }
    
    return 0;
}