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
  int matrix [5][5], i = 0 ;

   printf ("Welcome\n\n");

     for (l=0; l < 5; l++){
        for (c=0; c < 5; c++){
            matrix[l][c] = i;
            matrix[0][0] = 1;
            matrix[1][1] = 1;
            matrix[2][2] = 1;
            matrix[3][3] = 1;
            matrix[4][4] = 1; 

        printf(" %2i",matrix[l][c]);
        }//for
        printf("\n");
        }//for
     

    return 0;
}