#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// ============================================================================
// Funções Recursivas
// ============================================================================

// Movimentação do Bispo (recursiva - diagonal)
void moverBispo(int linha, int coluna, int TAM_TABULEIRO) {
    if (linha >= TAM_TABULEIRO || coluna >= TAM_TABULEIRO)
        return;

    printf("(%d, %d)\n", linha, coluna);
    moverBispo(linha + 1, coluna + 1, TAM_TABULEIRO);
}

// Movimentação da Torre (recursiva - para a direita)
void moverTorre(int linha, int coluna, int TAM_TABULEIRO) {
    if (coluna >= TAM_TABULEIRO)
        return;

    printf("(%d, %d)\n", linha, coluna);
    moverTorre(linha, coluna + 1, TAM_TABULEIRO);
}

// Movimentação da Rainha (recursiva - para a esquerda )
void moverRainha(int linha, int coluna, int TAM_TABULEIRO) {
    if (coluna < 0)
        return;

    printf("(%d, %d)\n", linha, coluna);
    moverRainha(linha, coluna - 1, TAM_TABULEIRO);
}

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
    int movimentoCompleto = 1;
    int linhaInicial = 3;
    int colunaInicial = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo\n");
    moverBispo(0, 0, TAM_TABULEIRO);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimentação do Torre\n");
    moverTorre(linhaTorre, 0, TAM_TABULEIRO);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimentação da Rainha\n");
    moverRainha(linhaRainha, TAM_TABULEIRO - 1, TAM_TABULEIRO);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação do Cavalo\n");

    while (movimentoCompleto--) {
        // for aninhado para controlar os deslocamentos de linha e coluna
        for (int dLinha = -2; dLinha <= 2; dLinha++) {
            if (dLinha == 0) continue; // pular deslocamento 0

            for (int dColuna = -2; dColuna <= 2; dColuna++) {
                if (dColuna == 0) continue; // pular deslocamento 0

                // condição do L: |dLinha|=2 e |dColuna|=1 OU |dLinha|=1 e |dColuna|=2
                if ((abs(dLinha) == 2 && abs(dColuna) == 1) ||
                    (abs(dLinha) == 1 && abs(dColuna) == 2)) {

                    int novaLinha = linhaInicial + dLinha;
                    int novaColuna = colunaInicial + dColuna;

                    // verifica limites do tabuleiro
                    if (novaLinha >= 0 && novaLinha < TAM_TABULEIRO &&
                        novaColuna >= 0 && novaColuna < TAM_TABULEIRO) {
                        printf("(%d, %d)\n", novaLinha, novaColuna);
                    }
                }
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Este nível foi implementado acima com funções recursivas para Bispo, Torre e Rainha.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}