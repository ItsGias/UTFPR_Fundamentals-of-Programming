/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 28/07/2021
 * @brief  ex 2 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

/* Crie um algoritmo que receba 10 números e os armazene em um vetor A. Em seguida, gere o vetor 
 * B onde cada elemento é o quadrado do valor da mesma posição no vetor A
 */

int main (){

    int i = 0, vet_A[10], vet_B[10];

    printf ("Welcome\n");

    for (i = 0; i <10; i++){ 
       printf("\nType a value to square it [%i]: ", i);
       scanf ("%d",&vet_A[i]);
    }//main for
      
       for (i = 0; i <10; i++){
           vet_B [i] = vet_A[i] * vet_A[i];
           printf ("The number of the equation [%i] squared is: %d \n",i, vet_B [i]);       
       }// internal for


    return 0;
}// main