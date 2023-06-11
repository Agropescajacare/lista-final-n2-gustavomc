#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int matrizMultiplicada[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            matrizMultiplicada[i][j] = matriz[i][j] * 2;
        }
    }

    printf("\nMatriz multiplicada por 2:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matrizMultiplicada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
