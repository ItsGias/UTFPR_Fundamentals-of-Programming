/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 29/07/2021
 * @brief  ex 1 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Crie e exiba uma matriz identidade com dimensões 5 x 5;

int main () {

  int l, c;
  int matrix [5][5];

   printf ("Welcome");

     for ( l = 0; l < 5; l++){    
         for ( c = 0; c < 5; c++)
         {
             printf("\nType the matrix [%i] [%i]: ", l, c);
             scanf("%d", &matrix[l][c]);
         }// First Column for        
     }// First Line for
            for ( l = 0; l < 5; l++){    
                for ( c = 0; c < 5; c++){                
                    printf(" %4i ", matrix[l][c]);
                }// second Column for
                printf("\n");
            }// Second Line for
     
     

    return 0;
}