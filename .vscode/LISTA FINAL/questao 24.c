#include <stdio.h>

int main() {
    char tipoCarro;
    float distancia, consumoEstimado;

    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    printf("Digite a distância rodada em km: ");
    scanf("%f", &distancia);

    switch (tipoCarro) {
        case 'A':
            consumoEstimado = distancia / 8;
            printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);
            break;
        case 'B':
            consumoEstimado = distancia / 9;
            printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);
            break;
        case 'C':
            consumoEstimado = distancia / 12;
            printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);
            break;
        default:
            printf("Tipo de carro inválido.\n");
            break;
    }

    return 0;
}
