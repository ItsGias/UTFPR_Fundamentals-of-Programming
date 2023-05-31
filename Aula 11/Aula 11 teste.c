/* 
 * @author Gian Lucas dos Reis
 * @file Aula 1 teste.c 
 * @date 28/07/2021
 * @brief  Aula 11 teste
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
 
  int value [8], i = 0;

    for (i = 0; i < 8; i++){
        printf("Type a value: \n");
        scanf("%i",&value [i]);
    }
    
    for (i = 0; i < 8; i++){   
        printf("\nThe value of the cards [%i]: %i\n", i, value [i]);
    }
    

    return 0;
}