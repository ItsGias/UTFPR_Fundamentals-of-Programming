/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 19/07/2021
 * @brief  Exercicio 2 Aula 9
 */


#include <stdlib.h>
#include <stdio.h>

/* 
Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000. 
Ao receber um valor fora da faixa, o programa deverá parar de solicitar valores, 
exibir quantos valores válidos foram digitados e finalizar.


*/

int main() {
    int value;
    int valid_numbers = 0;

    printf("Do you wanna play a game? \n");
    printf("Type values between 500 and 1000\n");

    do {
        printf("Try a number: ");
        scanf("%i", &value); 
        
        valid_numbers++; 

        } //do key
        while (value >= 500 && value <= 1000);
        valid_numbers--; 
        printf("This is your amount of tries: %i", valid_numbers); 


}//main key