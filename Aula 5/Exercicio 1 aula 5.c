/* 
 * @author Gian Lucas dos Reis
 * @file Exercicio 1 aula 5.c 
 * @date 01/07/2021
 * @brief  Exercicio 1 da aula 5
 */


#include <stdio.h>
#include <stdlib.h>


/* Faça um programa que receba a altura de uma pessoa e calcule e exiba seu 
peso ideal utilizando a seguinte fórmula: peso ideal = 72.7 x altura – 58 */

int main() {
   
    // Colocar as variaveis
    float altura;
    float peso_ideal;
    // Pedir para o usuario seguir um comando
   
    printf("Digite a sua altura em metros:  ");
    scanf("%f", &altura);
    // A altura sera em metros
   
    peso_ideal = 72.7 * altura - 58;
    printf("Seu peso ideal: %.2f\n", peso_ideal);

    
    return 0;
}//main