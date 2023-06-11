#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int soma = 0;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}
