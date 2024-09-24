#include <stdio.h>

int main() {
    int n, i, tempo, numeroDoCorredor;
    float menorTempo = 100000000;

    printf("Digite quantos corredores tem na prova: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int h, m, s;
        printf("Digite o tempo do corredor de numero %d no formato HH.MM.SS: ", i + 1);
        scanf("%d.%d.%d", &h, &m, &s);

        // Validação
        if (h < 0 || m < 0 || s < 0 || m >= 60 || s >= 60) {
            printf("Entrada invalida. Tente novamente.\n");
            i--;
            //  O operador -- faz voltar na posição anterior, o que acaba parando na validação se for passado
            // o time de na formatação errada

            continue;
        }

        //Guardando tudo em HH:MM:SS
        tempo = h * 3600 + m * 60 + s;

        if (tempo < menorTempo) {
            menorTempo = tempo;
            numeroDoCorredor = i + 1;
        }
    }

    // Convertendo menorTempo para horas, minutos e segundos
    int horas = (int) menorTempo / 3600;
    int minutos = ((int) menorTempo % 3600) / 60;
    int segundos = (int) menorTempo % 60;

    // Exibindo o resultado em HH:MM:SS, facilitar a visualização
    printf("O corredor de numero %d fez o menor tempo de %02d:%02d:%02d\n",
           numeroDoCorredor, horas, minutos, segundos);

    return 0;
}