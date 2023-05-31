/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 29/07/2021
 * @brief  ex 2 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e 
//retorne a soma dos elementos da sua diagonal principal e da sua diagonal secundária;

int main () {

  int l, c;
  int matrix [3][3];
  int result_1, result_2;

   printf ("Welcome\n");

     for ( l = 0; l < 3; l++){    
         for ( c = 0; c < 3; c++)
         {
             printf("Type the matrix [%i] [%i]: ", l, c);
             scanf("%d", &matrix[l][c]);
         }// First Column for        
     }// First Line for
            for ( l = 0; l < 3; l++){    
                for ( c = 0; c < 3; c++){ 
                    result_1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
                    result_2 = (matrix[0][2] + matrix[1][1] + matrix[2][0])*-1;            
                                        
                }// second Column for
            }// Second Line for

                    printf("\nThe sum of the main diagonal is: %i \n", result_1);
                    printf("\nThe sum of the second diagonal is: %i \n", result_2);
     
    return 0;
}