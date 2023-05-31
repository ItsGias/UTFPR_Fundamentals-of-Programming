/* 
 * @author Gian Lucas dos Reis
 * @file ex4.c 
 * @date 29/07/2021
 * @brief  ex 4 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Faça um programa que multiplique por 5 a matriz A (preenchida a partir do teclado) para gerar a matriz C.

int main () {
    int matrix_A [3][3], matrix_B [3][3];
    int l, c;

    printf("Welcome\n");

    for ( l = 0; l < 3; l++){    
        for ( c = 0; c < 3; c++){        
            printf("Type the matrix [%i] [%i]: ", l, c);
            scanf("%d", &matrix_A[l][c]);
        }//for C       
    }//for I
     for ( l = 0; l < 3; l++){    
        for ( c = 0; c < 3; c++){        
            matrix_B[l][c] = matrix_A [l][c] * 5;
            printf("%4i",matrix_B[l][c]);
        }// for C
        printf("\n");     
    }// for I

    return 0;
}//main