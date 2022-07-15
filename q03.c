#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int *pMatriz;
    int nElementos;
    float media;
}Stc;

int main() {
    Stc infos;
    float soma = 0;
    
    puts("Informe a quantidade de elementos no vetor:");
    scanf("%d",&infos.nElementos);
    infos.nElementos = infos.nElementos;
    
    infos.pMatriz = malloc(infos.nElementos * sizeof(int));
	if (!infos.pMatriz){
        printf("Não foi possivel alocar o ponteiro");
		exit(1);
	}
    
    srand(time(NULL));
    for(int i = 0 ; i < infos.nElementos; i++){
        *(infos.pMatriz + i) = (float) (rand() % 10 );
		soma += *(infos.pMatriz + i);
    }
    
    infos.media = soma / infos.nElementos;
    
    printf("Endereco Ponteiro para a matriz: %p\n", infos.pMatriz);
    printf("Quantidade de elementos: %d\n", infos.nElementos);

    for(int i = 0; i < infos.nElementos; i++){
        printf(" %d ",infos.pMatriz[i]);
    }
    printf("\nMEDIA: %.2f",infos.media);
    return 0;
}