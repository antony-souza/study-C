#include <stdio.h>
#include <string.h>

struct Car
{
    char name[20];
    int  year;
    char color[20];
};

int main()
{
    struct Car car[2];

    strcpy(car[0].name, "Gol");
    car[0].year = 2018;
    strcpy(car[0].color, "blue");

    strcpy(car[1].name, "Corolla");
    car[1].year = 2019;
    strcpy(car[1].color, "red");

/* Os % abaixo(especificadores de formato) especifícia o tipo de dato que ele está imprimindo na saída, e o \n é um
quebra linha */

/* o for executa uma repetição usando a variável 'i', e toda vez é adicionando como um 
novo elemento com cada argumento do Array*/

    for (int i = 0; i < 2; i++) // Corrigido para i < 2
    {
        printf("Detalhes do Carro:\n"); // Corrigido para imprimir o número da lista
        printf("Nome: %s\n", car[i].name);
        printf("Ano: %d\n", car[i].year);
        printf("Cor: %s\n\n", car[i].color);
    }

    return 0;
}
