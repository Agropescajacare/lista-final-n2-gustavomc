#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2;
    float soma, produto, quadrado1, raizQuadrada, seno;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * pow(numero2, 2);
    quadrado1 = pow(numero1, 2);
    raizQuadrada = sqrt(pow(numero1, 2) + pow(numero2, 2));
    seno = sin(numero1 - numero2);

    printf("a) A soma dos numeros: %.2f\n", soma);
    printf("b) O produto do primeiro numero pelo quadrado do segundo: %.2f\n", produto);
    printf("c) O quadrado do primeiro numero: %.2f\n", quadrado1);
    printf("d) A raiz quadrada da soma dos quadrados: %.2f\n", raizQuadrada);
    printf("e) O seno da diferenca do primeiro numero pelo segundo: %.2f\n", seno);

    return 0;
}