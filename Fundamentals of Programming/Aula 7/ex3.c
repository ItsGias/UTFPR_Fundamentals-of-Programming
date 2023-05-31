/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 04/07/2021
 * @brief  Exercicio 3 da aula 7
 */


#include <stdlib.h>
#include <stdio.h>

/*Altere o exercício anterior para receber os 3 valores no mesmo scanf.
 *Exemplo:
 *Digite a conta a ser realizada: 5+8
 *O resultado é: 13
 */

  int main() {

  float value_1, value_2;
  char operation;
  float result;
  

  printf("Type a full math operation: ");
  scanf("%f %c %f", &value_1, &operation, &value_2);
   
     switch (operation)
    {
        case '+': 
          result = value_1 + value_2;
          printf("\nThe result using the operation is: %.2f", result );
                      
          break;

        case '-':
          result = value_1 - value_2;
          printf("\nThe result using the operation is: %.2f", result );

          break;

        case '/':
          result = value_1 / value_2;
          printf("\nThe result using the operation is: %.2f", result);

          break;

        case '*':
           result = value_1 * value_2;
           printf("\nThe result using the operation is: %.2f", result);

           break;

        default:
               printf("\nYou've probably put the wrong sign, try again...\n");

           return 0;    


    }
  }