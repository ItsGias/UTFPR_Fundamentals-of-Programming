/* 
 * @author Gian Lucas dos Reis
 * @file ex5.c 
 * @date 28/07/2021
 * @brief  ex 5 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

//Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa que imprima todos os elementos comuns aos dois vetores.

int main (){
 
 int i = 0,j = 0, vet_A [4], vet_B [5]; 

  printf("Welcome\n");
     
     for (i = 0; i < 4; i++){
         printf("\nType a number for A [%i]: ", i);
         scanf("%d", &vet_A[i]);     
     }
     for (j = 0; j < 5; j++)
     {
         printf("\nType a number for B [%i]: ", j);
         scanf("%d", &vet_B[j]);
     }
            for (i=0; i<4; i++)
            for (j=0; j<5; j++){

                if (vet_A [i] == vet_B[j])
                printf("\n %d ",vet_A [i]);
                
            }
    return 0;
}
