#include <stdio.h>

int main() {
    // --- Nível Novato ---

    // 1. Declarando o tabuleiro 5x5
    int tabuleiro[5][5];

    // Inicializa o tabuleiro com 0 (posições vazias)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionando o Navio Vertical (3 partes)
    // Posição de início: (1, 2)
    // O navio ocupará as posições (1, 2), (2, 2) e (3, 2)
    for (int i = 1; i < 4; i++) {
        tabuleiro[i][2] = 1; // 1 representa uma parte do navio
    }

    printf("Posicionamento do Navio Vertical:\n");
    printf("Parte 1: (%d, %d)\n", 1, 2);
    printf("Parte 2: (%d, %d)\n", 2, 2);
    printf("Parte 3: (%d, %d)\n", 3, 2);

    // 3. Posicionando o Navio Horizontal (3 partes)
    // Posição de início: (4, 0)
    // O navio ocupará as posições (4, 0), (4, 1) e (4, 2)
    for (int j = 0; j < 3; j++) {
        tabuleiro[4][j] = 1; // 1 representa uma parte do navio
    }

    printf("\n----------------------------------------\n");
    printf("Posicionamento do Navio Horizontal:\n");
    printf("Parte 1: (%d, %d)\n", 4, 0);
    printf("Parte 2: (%d, %d)\n", 4, 1);
    printf("Parte 3: (%d, %d)\n", 4, 2);
    printf("----------------------------------------\n");

    // 4. (Opcional) Exibindo o tabuleiro completo para visualização
    printf("\nVisualizacao do Tabuleiro (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}