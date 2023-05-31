/* 
 * @author Gian Lucas dos Reis
 * @file ex5.c 
 * @date 13/07/2021
 * @brief  Exercicio 5 da aula 8
 */


#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba um número real, calcule e exiba o quadrado dele. O programa deverá repetir esse procedimento para 10 números.

int main(){

    int contador = 10;
    int numero;
    int resultado;

        printf("Insira um numero para ser elevado ao quadrado:\n");
            scanf("%i", &numero);

            while(contador > 0){
                resultado = numero * numero;
                contador--;
                printf("O numero %i elevado ao quadrado eh %i\n", numero, resultado);
                printf("Insira outro numero:\n");
                scanf("%i", &numero);
                }


}//main