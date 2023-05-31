/* 
 * @author Gian Lucas dos Reis
 * @file ex6.c 
 * @date 29/07/2021
 * @brief  ex 6 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Faça um programa que multiplique as matrizes A e D abaixo gerando matriz AD

int main(){
  
  int matrix_A [3][3],matrix_D [3][3], matrix_AD [3][3];
  int l, c;

  printf("Welcome\n");
 
    for ( l = 0; l < 3; l++){
        for ( c = 0; c < 3; c++){    
        printf("Type the Matrix A [%i] [%i]: ", l, c);
        scanf("%d", matrix_A[l][c]);
        }//for line     
    }//for column

    for ( l = 0; l < 3; l++){
        for ( c = 0; c < 3; c++){    
        printf("Type the Matrix D [%i] [%i]: ", l, c);
        scanf("%d", matrix_D[l][c]);
        }//for column     
    }//for line

    printf("\nThe Matrix AD\n");

    for ( l = 0; l < 3; l++){
        for ( c = 0; c < 3; c++){    
        
        matrix_AD [l][c] = (matrix_A[0][0]*matrix_D[0][0])

        printf("Type the Matrix D [%i] [%i]: ", l, c);
        }//for column     
    }//for line
   


    return 0;
}