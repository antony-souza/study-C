#include <stdio.h>
#include <string.h>


struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {

    struct Pessoa pessoas[3];


    strcpy(pessoas[0].nome, "Joao");
    pessoas[0].idade = 30;
    strcpy(pessoas[0].endereco, "Rua 1, Cidade A");

    strcpy(pessoas[1].nome, "Maria");
    pessoas[1].idade = 25;
    strcpy(pessoas[1].endereco, "Rua 2, Cidade B");

    strcpy(pessoas[2].nome, "Pedro");
    pessoas[2].idade = 40;
    strcpy(pessoas[2].endereco, "Rua 3, Cidade C");

    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Endereco: %s\n\n", pessoas[i].endereco);
    }

    return 0;
}
