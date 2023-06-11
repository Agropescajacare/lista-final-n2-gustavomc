#include <stdio.h>

int main() {
    int vetor[8];
    int i, numero, posicao = -1;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 8; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um número para pesquisar: ");
    scanf("%d", &numero);

    for (i = 0; i < 8; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}
