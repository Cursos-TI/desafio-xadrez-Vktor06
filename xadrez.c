#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    //Declarando as váriaveis de cada peça individualmente.
    int bispo = 1, torre = 1 , rainha = 1;
    // Implementação de Movimentação do Bispo
    //Lógica usando for.

    for(bispo; bispo < 6; bispo++){
        printf("Cima\n");
        printf("Direita\n");
    }

    //Colocando espaçamento entre as lógicas
    printf("\n");

    // Implementação de Movimentação da Torre
    //Lógica usando while.
    while(torre <= 5){
        printf("Direita\n", torre);
        torre++;
    }
    
    printf("\n");

    // Implementação de Movimentação da Rainha
    //Lógica usando do while.
    
    do{
        printf("Esquerda\n", rainha);
        rainha++;
    }while(rainha <= 8);
   
    return 0;
}
