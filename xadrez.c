#include <stdio.h>

void movimentoTorre(int casas) { // recursividade para movimentação da peça Torre
    if (casas > 0) { // declaração do fim da recursividade
        printf("Direita\n"); // a peça se moverá para a direita
        movimentoTorre(casas - 1); // decremento da quantidade de casas
    }
}

void movimentoBispo(int casas) { // recursividade com loops aninhados para movimentação da peça Bispo
    if (casas > 0) { // declaração do fim da recursividade
        int moviVertical = casas; // movimentação na diagonal para cima e para direita
        while (moviVertical == casas) { // a peça se move na vertical para cima, de acordo com a quantidade de casas restantes
            for (int moviHorizontal = casas; moviHorizontal == moviVertical; moviHorizontal--) { // a peça se move na horizontal para a direita, de acordo com a movimetação já realizada na vertical
                printf("Direita\n"); // a peça se moverá para a direita
            }
            printf("Cima\n"); //  a peça se movera para cima
            moviVertical--; // decremento do movimento vertical
        }
        movimentoBispo(casas - 1); // decremento da quantidade de casas
    }
}

void movimentoRainha(int casas) {// recursividade para movimentação da peça Rainha
    if (casas > 0) { // declaração do fim da recursividade
        printf("Esquerda\n");// a peça se moverá para a esquerda
        movimentoRainha(casas - 1); // decremento da quantidade de casas
    }
}


int main() {

    printf("Movimentação das peças de Xadrez \n\n"); // título

    printf("Movimentação da Torre: \n"); // identificação da peça que irá movimentar

        movimentoTorre(5); // definição da quantidade de casas a ser movimentada pela peça Torre
    
    printf("\n"); // espaçamento

    printf("Movimentação do Bispo: \n"); // identificação da peça que irá movimentar

        movimentoBispo(5);// definição da quantidade de casas a ser movimentada pela peça Bispo

    printf("\n"); // espaçamento

    printf("Movimentação da Rainha: \n"); // identificação da peça que irá movimentar

        movimentoRainha(8); // definição da quantidade de casas a ser movimentada pela peça Rainha
        
    printf("\n"); // espaçamento

    printf("Movimentação do Cavalo:\n"); // identificação da peça que irá movimentar

        for (int MovVertCavalo = 2, MovHorCavalo = 1; MovVertCavalo > 0; MovHorCavalo--) { // loop com declaração das variáveis de movimento horizontal e vertical, com movimentação em 2 casas para cima e uma para a esquerda
            while (MovVertCavalo > 0){ // loop para movimento vertical da peça Cavalo
                printf("Cima\n"); //  a peça se mover para cima
                MovVertCavalo--; // decremento do movimento vertical
            }
        printf("Direita\n"); // a peça se moverá para a direita
        
        } // movimentação em L, sendo 2 casas para cima e uma para direita


    return 0;
}
