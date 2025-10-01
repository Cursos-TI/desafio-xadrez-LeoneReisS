#include <stdio.h>

int main() {

    int movimentoTorre = 1, movimentoBispo = 1, movimentoRainha;

    printf("Movimentação das peças de Xadrez \n\n");

    printf("Movimentação da Torre: \n");

        while (movimentoTorre <= 5) {
            printf("Direita \n");
            movimentoTorre++;
        }
    
    printf("\n");

    printf("Movimentação do Bispo: \n");

        do {
            printf("Direita, Cima \n");
            movimentoBispo++;
        } while (movimentoBispo <= 5);

    printf("\n");

    printf("Movimentação da Rainha: \n");

    for (movimentoRainha = 8; movimentoRainha > 0; movimentoRainha--) {
        printf("Esquerda \n");
    }
        

    return 0;
}
