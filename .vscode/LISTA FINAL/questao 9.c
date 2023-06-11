#include <stdio.h>

int main()
{
    float tempoViagem, velocidadeMedia, distanciaPercorrida;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempoViagem);

    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidadeMedia);

    distanciaPercorrida = tempoViagem * velocidadeMedia;

    printf("A distancia percorrida foi de: %.2f km\n", distanciaPercorrida);


    return 0;
}
