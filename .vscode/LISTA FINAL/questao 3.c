#include <stdio.h>

int main()
{
   float metros, decimetros, centimetros, milimetros;
   
   printf("Digite um valor em metros:");
   scanf("%f", &metros);
   
   //Calcula os valores correspondentes
   decimetros = metros * 10;
   centimetros = metros * 100;
   milimetros = metros * 1000;
   
   //imprime os resultados
   printf("Valor em decimetros: %.2f\n", decimetros);
   printf("Valor em centimetros: %.2f\n", centimetros);
   printf("Valor em milimetros: %.2f\n",milimetros);

    return 0;
}