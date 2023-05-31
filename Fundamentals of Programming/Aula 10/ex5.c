/* 
 * @author Gian Lucas dos Reis
 * @file ex5.c 
 * @date 26/07/2021
 * @brief  Exercicio 5 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

//Faça um programa que calcule o fatorial de um número a ser digitado.

int main (){

    int numero,fatorial;


        printf("Insira o numero a ser fatorado: ");
        scanf("%i", &numero);



                for(fatorial = 1 ; numero > 1 ; numero = numero - 1){
                    fatorial = numero * fatorial; 
        
    }//for
                        
                        printf("O numero fatorado eh : %i", fatorial);

                        return 0;
}//main


