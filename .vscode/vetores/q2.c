#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];
    int i;
    int maior, menor;
    int diferenca;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < TAMANHO_VETOR; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    diferenca = maior - menor;

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca: %d\n", diferenca);

    return 0;
}
