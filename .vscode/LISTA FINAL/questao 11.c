#include <stdio.h>

int main()
{
    float HT,  // Quantidade de horas trabalhadas
          VH,  // Valor da hora em R$
          PD,  // Percentual de desconto
          TD,  // Total do desconto em R$
          SB,  // Salário bruto
          SL;  // Salário líquido
 
    printf("HORAS TRABALHADAS ......: "); scanf("%f", &HT);
    printf("VALOR DA HORA ..........: "); scanf("%f", &VH);
    printf("PERCENTUAL DE DESCONTO .: "); scanf("%f", &PD);
 
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
 
    system("cls");
 
    printf("SALÁRIO BRUTO ..........: %7.2f\n", SB);
    printf("DESCONTO ...............: %7.2f\n", TD);
    printf("SALÁRIO LÍQUIDO ........: %7.2f\n", SL);
    
    
    

    return 0;
}