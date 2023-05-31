/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 01/07/2021
 * @brief  Exercicio 3 da aula 6
 */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

 /* Faça um programa que receba os coeficientes A, B e C de uma equação do segundo grau e 
  * retorne as raízes da equação (se existirem).
  * Para isso, lembre-se da fórmula de Báskara:
  */
int main(){
    float A, B, C, D;
    float x1, x2;
    float Delta;
    
    // Perguntar e fazer scan de A, B, C, D
    printf("\n Digite o valor de A:");
    scanf("%f", &A);
    printf("\n Digite o valor de B: ");
    scanf("%f", &B);
    printf("\n Digite o valor de C: ");
    scanf("%f", &C);
    
    //Calcula o Delta, x1 e x2
    Delta = B*B - 4*A*C ;
         x1 = (-B + sqrt(Delta)) / (2*A);
         x2 = (-B - sqrt(Delta)) / (2*A);

        // If para determinar raiz real
        if (Delta < 0)
        {
            printf("\n A sua equacao possui raizes reais");
        } 
         else //Else para o valor de X1 e x2
        {
            printf("\n O valor de x1: %.2f", x1);
            printf("\n O valor de x2: %.2f", x2);
        }
                


    return 0;
}//main