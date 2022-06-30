/*Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o
nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um
elemento inteiro para identificar o n ́umero do pedido.*/

#include <stdlib.h>
#define TAM 20

int main(){
    struct Estoque{
        char nomePeca[TAM];
        int numeroPeca, numeroPedido;
        float preco;
    };
    
    struct Estoque pedido;

    puts("Digite o nome da peca:");
    scanf("%s", &pedido.nomePeca);

    puts("Digite o numero da peca:");
    scanf("%d", &pedido.numeroPeca);

    puts("Digite o preco:");
    scanf("%f", &pedido.preco);

    puts("Digite o numero do pedido:");
    scanf("%d", &pedido.numeroPedido);

    puts("");
    puts("");

    printf("*-*-*-*-* COMPRA FEITA COM SUCESSO *-*-*-*-*\n");
    printf("PECA: %s\nNUMERO DA PECA: %d\nPRECO: %0.2f\nNUMERO DO PEDIDO: %d", pedido.nomePeca, pedido.numeroPeca, pedido.preco, pedido.numeroPedido);

    return 0;
}