#include <stdio.h>

void listarCrescente(int lista[], int tamanho) {
    int i, j, temp;
    
    // Ordenar a lista em ordem crescente usando o algoritmo de ordenação bubble sort
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                // Trocar os elementos de posição
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
    
    // Exibir a lista em ordem crescente
    printf("Lista em ordem crescente: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarDecrescente(int lista[], int tamanho) {
    int i, j, temp;
    
    // Ordenar a lista em ordem decrescente usando o algoritmo de ordenação bubble sort
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] < lista[j + 1]) {
                // Trocar os elementos de posição
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
    
    // Exibir a lista em ordem decrescente
    printf("Lista em ordem decrescente: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOriginal(int lista[], int tamanho) {
    int i;
    
    // Exibir a lista na ordem original
    printf("Lista na ordem original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];
    int i, opcao;
    
    // Capturar os valores da lista
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
    
    // Exibir as opções disponíveis
    printf("\nEscolha uma opcao:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    
    // Verificar a opção escolhida e executar a função correspondente
    switch (opcao) {
        case 1:
            listarCrescente(lista, 10);
            break;
        case 2:
            listarDecrescente(lista, 10);
            break;
        case 3:
            listarOriginal(lista, 10);
            break;
        default:
            printf("Opcao invalida.\n");
    }
    
    return 0;
}

