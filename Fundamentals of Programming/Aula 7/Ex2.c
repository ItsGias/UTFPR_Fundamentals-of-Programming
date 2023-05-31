/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 04/07/2021
 * @brief  Exercicio 2 da aula 7
 */


#include <stdlib.h>
#include <stdio.h>
 
/*Crie uma calculadora usando a instrução switch, 
 *que pergunte qual das operações básicas quer fazer (+, -, * e /), 
 *em seguida peça os dois números e mostre o resultado da operação matemática entre eles.
 */

  int main() {

  float value_1, value_2;
  char operation;
  float result;
  

  printf("Type a value: ", value_1);
  scanf("%f", &value_1);
  printf("\nType another value: ", value_2);
  scanf("%f", &value_2);

  printf("\nWrite the sign of the Operation that you want to do: ", operation);
  getchar (); 
  scanf("%c", &operation);
   
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