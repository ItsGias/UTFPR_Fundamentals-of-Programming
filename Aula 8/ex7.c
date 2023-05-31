/*
 * @file: ex7.c
 * @date: 13/07/2021
 * @author: Gian lucas dos Reis
 * @Brief: exercicio 7
 */


#include <stdio.h>
#include <stdlib.h>

// Faça um programa que calcule o fatorial de um número a ser digitado.

int main () {

 int numero, fatorial=1, i=1;
     
     printf("\nDigite o numero o qual sera fatorado: ");
     scanf("%i", &numero);

    while (numero>=i)
    {
        fatorial = fatorial * i;
        i++;
    }
    

    printf("\nO fatorial de %i eh %d", numero ,fatorial);



    return 0;
}
