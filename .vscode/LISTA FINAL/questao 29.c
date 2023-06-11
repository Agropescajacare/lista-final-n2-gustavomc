#include <stdio.h>

int main() {
    int contadorAlunos = 1;
    float nota1, nota2, nota3, nota4, media;
    float mediaTurma = 0.0;
    int pontosRecuperacao;

    do {
        printf("Aluno %d:\n", contadorAlunos);

        printf("Digite a nota 1: ");
        scanf("%f", &nota1);

        printf("Digite a nota 2: ");
        scanf("%f", &nota2);

        printf("Digite a nota 3: ");
        scanf("%f", &nota3);

        printf("Digite a nota 4: ");
        scanf("%f", &nota4);

        media = (nota1 * 3 + nota2 * 2 + nota3 + nota4) / 7;
        mediaTurma += media;

        printf("Média: %.2f\n", media);

        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else if (media >= 5.0) {
            printf("Situação: Recuperação\n");
            pontosRecuperacao = 10 - media;
            printf("Pontos necessários para aprovação: %d\n", pontosRecuperacao);
        } else {
            printf("Situação: Reprovado\n");
        }

        printf("\n");
        contadorAlunos++;
    } while (contadorAlunos <= 5);

    float mediaGeral = mediaTurma / 5;
    printf("Média da turma: %.2f\n", mediaGeral);

    return 0;
}


