#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char matricula[5], departamento[10];
}professor;

typedef struct{
    int codigo;
	char horas[8];
	professor *pProfessor;
}disciplina;

int main(){
    disciplina matematica;
	professor jose;
	matematica.pProfessor = &jose;

    return 0;
}