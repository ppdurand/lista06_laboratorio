/*Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do
usuario, e sua media.*/
#include <stdio.h>
#define TAM 30

int main(){
    struct StudentToken{
        char name[TAM];
        float score1, score2, average;
    };

    struct StudentToken student;

    puts("Nome do aluno: ");
    scanf("%s", &student.name);

    puts("NOTA 1: ");
    scanf("%f", &student.score1);

    puts("NOTA 2: ");
    scanf("%f", &student.score2);

    student.average = (student.score1 + student.score2) / 2;

    printf("MEDIA: %0.2f", student.average);

    
}
