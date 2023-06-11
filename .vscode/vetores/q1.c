#include <stdio.h>


int main() {
    int vetor[10];
    int i;
    int maior;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nMaior numero: %d\n", maior);

    return 0;
}

