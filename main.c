#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int alunos;
    float media = 7;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    float* alunosArray = (float*)malloc(alunos * sizeof(float));

    if (alunosArray == NULL) {
        printf("Erro ao alocar memória");
        return 1;
    }

    for (int i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunosArray[i]);
    }

    printf("\n");
    printf("===============================================\n");
    printf("| Aluno | Nota   | Situação                  |\n");
    printf("===============================================\n");

    int aprovados = 0;
    int reprovados = 0;

    for (int i = 0; i < alunos; i++) {
        printf("| %-5d | %-6.2f | ", i + 1, alunosArray[i]);
        if (alunosArray[i] >= media) {
            printf("APROVADO                  |\n");
            aprovados++;
        } else {
            printf("REPROVADO                 |\n");
            reprovados++;
        }
    }

    printf("===============================================\n");
    printf("A quantidade de alunos aprovados foi: %d\n", aprovados);
    printf("A quantidade de alunos reprovados foi: %d\n", reprovados);

    free(alunosArray);

    return 0;
}