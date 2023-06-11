#include <stdio.h>

int main()
{
    int matriz[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
    }
    printf("\n A matriz digitada foi: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
        
    }    
    return 0;
}
