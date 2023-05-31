/* 
 * @author Gian Lucas dos Reis
 * @file Exercicio 2 aula 5.c 
 * @date 01/07/2021
 * @brief  Exercicio 2 da aula 5
 */


#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que calcule e mostre a idade de uma pessoa a partir do ano em que a 
 * pessoa nasceu e do ano atual. Os valores serão digitados pelo usuário.
 * Considere que ela já fez aniversário nesse ano.
 */



int main() {

 int idade;
 int ano_atual = 2021;
 int ano_digitado;
    
    //Pergunte ao usuario o ano em que ele nasceu
     printf("Digite o ano que voce nasceu:");
     scanf("%i", &ano_digitado);
    
    // Subtraia o ano digitado do ano atual
     idade = ano_atual - ano_digitado;
     printf("Sua idade eh: %i", idade);


    
    return 0;
}