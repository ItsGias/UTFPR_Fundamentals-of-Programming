/**
 * @file ex3.c
 * @author Gian Lucas dos Reis
 * @brief Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;
 * @version 0.1
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[21], class[21];
    int grade[4];
} Student;

int main()
{
    Student student;

    float finalGrade = 0;

    printf("Welcome user!!!\n");
    // intro

    printf("\nPlease insert the name of the student: ");
    fgets(student.name, 20, stdin);
    student.name[strcspn(student.name, "\n")] = '\n';
    setbuf(stdin, NULL);
    printf("\nPlease insert the name of the class: ");
    fgets(student.class, 20, stdin);
    student.class[strcspn(student.class, "\n")] = '\n';
    setbuf(stdin, NULL);

    for (size_t i = 0; i < 4; i++)
    {
        printf("\nNow insert the grade of the test number %i: ", i);
        scanf("%i", &student.grade[i]);
    } // for

    for (size_t i = 0; i < 4; i++)
    {
        finalGrade = finalGrade + student.grade[i];
    }

    finalGrade = finalGrade / 4;

    printf("\n\nStudent name: %s School subject: %s Grades: %i %i %i %i ", student.name, student.class, student.grade[0], student.grade[1], student.grade[2], student.grade[3]);

    printf("\n\n");
    if (finalGrade >= 7)
    {
        printf("%s situation in %s is: Approved with %.2f points", student.name, student.class, finalGrade);
    }
    else if (finalGrade >= 3 && finalGrade < 7)
    {
        printf("\n%s situation in %s is: Needs to do the final exam with %.2f points", student.name, student.class, finalGrade);
    }
    else
    {
        printf("\n%s situation in %s is: Flunked with %.2f points", student.name, student.class, finalGrade);
    }

    printf("\n\n");
    printf("Thank you for the attention and for using or software!!!\n");

    return 0;
} // main