#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
}vetorAluno[3];

float Media(float nota1, float nota2, int i){
    return vetorAluno[i].media = (nota1 + nota2) / 2;
}

int main(){
    for(int i = 0; i < 3; i++){
        printf("NOTA 1 DO ALUNO %d: ", i+1);
        scanf("%f",&vetorAluno[i].nota1);
        printf("NOTA 2 DO ALUNO %d: ", i+1);
        scanf("%f",&vetorAluno[i].nota2);
        Media(vetorAluno[i].nota1, vetorAluno[i].nota2, i);
    }

    for(int i = 0; i < 3; i++){
        printf("MEDIA ALUNO %d: %0.2f\n" ,i+1 ,vetorAluno[i].media);    
    }
    return 0;
}