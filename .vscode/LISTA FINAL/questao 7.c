#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("As quatro primeiras letras do nome sao: %.4s\n", nome);

    return 0;
}