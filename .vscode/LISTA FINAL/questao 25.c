#include <stdio.h>

int main() {
    int quantidadeAlunos, contador = 1;
    float nota, somaNotas = 0.0, media;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quantidadeAlunos);

    while (contador <= quantidadeAlunos) {
        printf("Digite a nota do aluno %d: ", contador);
        scanf("%f", &nota);

        somaNotas += nota;
        contador++;
    }

    media = somaNotas / quantidadeAlunos;
    printf("A média da turma é %.2f\n", media);

    return 0;
}
