/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 28/07/2021
 * @brief  ex 3 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

/*Leia um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. 
 *Escreva um programa que determine e escreva a quantidade de pessoas que possuem idade superior a 35 anos
 */

int main (){
    
    int i = 0, age[10], age_2 = 0;

    printf("Welcome\n");

        for (i = 0; i < 10; i++){   
            printf("Type a age: ");
            scanf("%i", &age[i]);
            
            if (age [i] > 35){
                age_2++;                         
            }//if   
                    
         }//for
        printf("\nThe number of persons above 35 is: %i \n", age_2);
                               
    return 0;
}