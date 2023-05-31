/**
 * @file ex5.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Um problema típico em ciência da computação consiste em converter um número da sua forma decimal para binária. Crie um algoritmo recursivo para resolver esse problema.

●Solução trivial: x=0 quando o número inteiro já foi convertido para binário

●Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito (0 ou 1) dado o sucesso da divisão.
 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int convert(int input)
{
    if (input == 0)
    {
        // Recursive end
        return 1;
    }
    else
    {
        // Recursive call
        convert(input / 2);

        // Binary conversion
        if (input % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        } // else

    } // recursive else
} // convert

int main()
{
    int input;

    printf("Type the number that you wish to know the binary form: ");
    scanf("%i", &input);

    printf("%i in base 2: ", input);

    convert(input); // function

    printf("\n");

    return (0);
} // main