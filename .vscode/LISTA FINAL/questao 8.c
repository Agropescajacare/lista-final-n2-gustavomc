#include <stdio.h>

int main()
{
    float precoProduto, novoPreco, desconto;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    desconto = precoProduto * 0.09;
    novoPreco = precoProduto - desconto;

    printf("O novo preco com desconto de 9%% e: %.2f\n", novoPreco);


    return 0;
}
