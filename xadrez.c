#include <stdio.h>

int main() {

    int movimentoTorre = 1, movimentoBispo = 1, movimentoRainha, movimentoCavalo = 1; // declaração de variáveis dos movimentos das peças

    printf("Movimentação das peças de Xadrez \n\n"); // título

    printf("Movimentação da Torre: \n"); // identificação da peça que irá movimentar

        while (movimentoTorre <= 5) { // movimentação da torre em cinco posições para a direita
            printf("Direita \n");
            movimentoTorre++;
        }
    
    printf("\n");

    printf("Movimentação do Bispo: \n"); // identificação da peça que irá movimentar

        do {
            printf("Direita, Cima \n"); // movimentação do bispo em cinco posições na diagonal direita e cima
            movimentoBispo++;
        } while (movimentoBispo <= 5);

    printf("\n");

    printf("Movimentação da Rainha: \n"); // identificação da peça que irá movimentar

    for (movimentoRainha = 8; movimentoRainha > 0; movimentoRainha--) { // movimentação da rainha em oito posições para a esquerda
        printf("Esquerda \n");
    }
        
    printf("\n");

    printf("Movimentação do Cavalo:\n"); // identificação da peça que irá movimentar

    while (movimentoCavalo <= 1) { // movimentação do cavalo em uma posição para a esquerda

        for (int movimentoVertical = 2; movimentoVertical >= 1; movimentoVertical--) { // movimentação do cavalo em duas posições para baixo com declaração da variável de movimento vertical
            printf("Baixo\n");
        }

    printf("esquerda\n");
    movimentoCavalo++;

    }

    return 0;
}
