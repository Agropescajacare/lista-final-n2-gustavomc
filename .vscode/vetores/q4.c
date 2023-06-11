#include <stdio.h>

int ehPrimo(int numero) {
    int i;
    if (numero <= 1) {
        return 0;
    }
    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vetor[10];
    int i;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros primos do vetor:\n");
    for (i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
