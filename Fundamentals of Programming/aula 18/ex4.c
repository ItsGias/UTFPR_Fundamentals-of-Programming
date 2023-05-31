/**
 * @file ex4.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Faça uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci, sendo que n é recebido por parâmetro. Utilize essa função para desenvolver um programa que mostre no main() os n termos dessa sequência na tela, a partir do valor de n recebido pelo teclado. Sabe-se que o 1º termo é 0 e o 2º termo é 1.
 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int a)
{
    if (a < 2)
    {
        return 1;
    } // base case
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2); // recursive call

    } // recursive case

} // Fibonacci function

int main()
{
    int number;

    printf("Type the term that you wish to know the fibonacci sequence: ");
    scanf("%i", &number);

    int sequence = fibonacci(number); // function

    printf("The term %i of the fibonacci sequence is = %i", number, sequence);

    return 0;
} // main