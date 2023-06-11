#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros impares do vetor:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
