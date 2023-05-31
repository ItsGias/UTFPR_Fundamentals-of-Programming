/* 
 * @author Gian Lucas dos Reis
 * @file ex5.c 
 * @date 29/07/2021
 * @brief  ex 5 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Faça um programa que some as matrizes A e B, gerando a matriz C

int main () {
 
 int matrix_A [3][3], matrix_B [3][3], matrix_C [3][3];
 int l, c;

      printf ("Welcome\n");
      printf ("\n");

      for ( l = 0; l < 3; l++){     
          for ( c = 0; c < 3; c++){          
              printf ("Type the Matrix A [%i] [%i]: ", l,c);
              scanf ("%d", &matrix_A[l][c]);
          }//for Column          
      }//for line
       printf ("\n");
      for ( l = 0; l < 3; l++){     
          for ( c = 0; c < 3; c++){          
              printf ("Type the Matrix B [%i] [%i]: ", l,c);
              scanf ("%d", &matrix_B[l][c]);
          }//for Column          
      }//for line 

      printf ("\nThis is the Matrix C\n");

      for ( l = 0; l < 3; l++){     
          for ( c = 0; c < 3; c++){    
              matrix_C[l][c] = matrix_B[l][c] + matrix_A[l][c];      
              printf ("%3i", matrix_C[l][c]);
          }//for Column 
          printf ("\n");         
      }//for line
      

    return 0;
}