#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("Tabuada de multiplicacao de %d:\n", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}

