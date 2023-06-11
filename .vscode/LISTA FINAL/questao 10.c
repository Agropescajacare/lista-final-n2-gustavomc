#include <stdio.h>

int main() {
    int decimal;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("Valor em hexadecimal: %x\n", decimal);
    printf("Valor em octal: %o\n", decimal);

    return 0;
}
