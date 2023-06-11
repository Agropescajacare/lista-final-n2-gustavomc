#include <stdio.h>

// Função para somar dois números
float somar(float num1, float num2) {
    return num1 + num2;
}

// Função para subtrair dois números
float subtrair(float num1, float num2) {
    return num1 - num2;
}

// Função para multiplicar dois números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Função para dividir dois números
float dividir(float num1, float num2) {
    if (num2 != 0)
        return num1 / num2;
    else
        return 0; // Tratamento para divisão por zero
}

int main() {
    float num1, num2;
    int operacao;

    printf("Escolha o tipo de operação:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Opção: ");
    scanf("%d", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\n");

    switch (operacao) {
        case 1:
            printf("Resultado da soma: %.2f\n", somar(num1, num2));
            break;
        case 2:
            printf("Resultado da subtração: %.2f\n", subtrair(num1, num2));
            break;
        case 3:
            printf("Resultado da multiplicação: %.2f\n", multiplicar(num1, num2));
            break;
        case 4:
            printf("Resultado da divisão: %.2f\n", dividir(num1, num2));
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
