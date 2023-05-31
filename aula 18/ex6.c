/**
 * @file ex6.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Considere a função X abaixo:

int X(int a){
  if(a <=0) return0;
  else return a + X(a-1);
}//X

O que essa função faz? Escreva uma função não-recursiva que resolve o mesmo problema
 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

// A funcao soma todos os numeros dentro dele mesmo, exemplo: 4 -> 4+3+2+1 = 10

#include <stdio.h>
#include <stdlib.h>

int functionX(int a)
{
    int b = a, sum = 0;
    if (a <= 0)
    {
        return 0;
    } // recursive base
    else
    {
        for (int i = 0; i < b; b--)
        {
            sum = sum + b;
        }
        return sum;
    } // recursive case

} // function X

int main()
{
    int number, sum;
    printf("Inform the value that you want to sum: ");
    scanf("%i", &number);

    sum = functionX(number); // function

    printf("The sum of the number that was informed = %i", sum);

    return 0;
} // main