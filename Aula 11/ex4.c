/* 
 * @author Gian Lucas dos Reis
 * @file ex4.c 
 * @date 28/07/2021
 * @brief  ex 4 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

//Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus elementos, e apresente o resultado.

int main (){
    int i = 0, vet[8], result = 0;

    printf("Welcome\n");

    for ( i = 0; i < 8; i++){    
        printf("Type a number: ");
        scanf("%d", &vet[i]);
    }// First for
        
        for (i = 0; i < 8; i++){        
            result = vet[i] + result;
        }//Second For
    
    printf("The result of the sum of the numbers is: %d", result);

    return 0;
}//main