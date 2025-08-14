#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int TAM_TABULEIRO = 8;
    int MOVE_DIAGONAL = 1;
    int MOVE_HORIZONTAL = 1;
    int MOVE_VERTICAL = 1;
    int linha;
    int coluna;
    int linhaTorre = 0;
    int linhaRainha = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo\n");
    linha = 0;
    coluna = 0;
    while (linha < TAM_TABULEIRO && coluna < TAM_TABULEIRO) {
        printf("(%d, %d)\n", linha, coluna);
        linha += MOVE_DIAGONAL;
        coluna += MOVE_DIAGONAL;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimentação do Torre\n");
    coluna = 0;
    while (coluna < TAM_TABULEIRO) {
        printf("(%d, %d)\n", linhaTorre, coluna);
        coluna += MOVE_DIAGONAL;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimentação da Rainha\n");
    coluna = TAM_TABULEIRO - 1;
    while (coluna >= 0) {
        printf("(%d, %d)\n", linhaRainha, coluna);
        coluna -= MOVE_DIAGONAL;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
