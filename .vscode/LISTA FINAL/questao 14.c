
#include <stdio.h>

int main()
{
   int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if( num%2 == 1 )
        printf("%d e ímpar\n", num);
    else
        printf("%d e par\n", num);

    return 0;
}
