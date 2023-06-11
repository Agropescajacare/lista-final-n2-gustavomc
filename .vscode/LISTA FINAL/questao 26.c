#include <stdio.h>

int main() {
    int tamanhoLado, i, j;

    printf("Digite o tamanho do lado do quadrado (1 a 20): ");
    scanf("%d", &tamanhoLado);

    if (tamanhoLado < 1 || tamanhoLado > 20) {
        printf("Tamanho do lado inválido. O tamanho do lado deve estar entre 1 e 20.\n");
        return 0;
    }

    for (i = 0; i < tamanhoLado; i++) {
        for (j = 0; j < tamanhoLado; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
