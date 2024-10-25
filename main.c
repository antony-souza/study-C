#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alunos;
    float media = 7.0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    float* alunosArray = (float*)malloc(alunos * sizeof(float));

    if(alunosArray == NULL) {
        printf("Erro ao alocar memoria");
        return  1;
    }

    for (int i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunosArray[i]);
    }

    printf("Tabela de Alunos\n: ");
    for (int i = 0; i < alunos; i++) {
        if(alunosArray[i] > media) {
            printf("Aluno %d foi APROVADO com nota: %.2f\n", i + 1, alunosArray[i]);
        }
        else {
            printf("Aluno %d foi REPROVADO com nota: %.2f\n", i + 1, alunosArray[i]);
        }
    }

    free(alunosArray);

    return 0;
}
