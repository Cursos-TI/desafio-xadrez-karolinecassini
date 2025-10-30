#include <stdio.h>

int main() {
    // ==============================
    // Simulação de movimentos no xadrez
    // Peças: Torre, Bispo e Rainha
    // Estruturas usadas: for, while, do-while
    // ==============================

    // ==============================
    // TORRE – movimento horizontal (para a direita)
    // Estrutura usada: FOR
    // ==============================
    int casas_torre = 5; // número de casas que a torre vai se mover

    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ==============================
    // BISPO – movimento diagonal (para cima e à direita)
    // Estrutura usada: WHILE
    // ==============================
    int casas_bispo = 5; // número de casas que o bispo vai se mover
    int contador = 1;

    printf("\nMovimento do BISPO:\n");
    while (contador <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    // ==============================
    // RAINHA – movimento para a esquerda
    // Estrutura usada: DO-WHILE
    // ==============================
    int casas_rainha = 8; // número de casas que a rainha vai se mover
    int j = 1;

    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casas_rainha);

    // ==============================
    // Fim do programa
    // ==============================
    printf("\nSimulação concluída!\n");

    return 0;
}
