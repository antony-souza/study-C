#include <stdio.h>
#include <string.h>

#define MAX_USERS 3
#define MAX_CARS 3

// Estrutura para os usuários
struct User {
    char name[45];
    int age;
    float money;
};

// Estrutura para os carros
struct Car {
    char name[36];
    float price;
};

// Função para exibir a lista de usuários
void listarUsuarios(struct User users[], int n) {
    printf("Lista de Usuários:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Idade: %d - Saldo: %.2f\n", users[i].name, users[i].age, users[i].money);
    }
}

// Função para exibir a lista de carros
void listarCarros(struct Car cars[], int n) {
    printf("Lista de Carros:\n\n");
    for (int i = 0; i < n; i++) {
        printf("Carro %d:\n", i+1);
        printf("Nome: %s\n", cars[i].name);
        printf("Preço: %.2f\n\n", cars[i].price);
    }
}

int main() {
    // tabela de usuários
    struct User users[MAX_USERS] = {
        {"João", 30, 20000.0},
        {"Maria", 25, 25000.0},
        {"Pedro", 35, 18000.0}
    };

    // tabela de carros
    struct Car cars[MAX_CARS] = {
        {"Celta Azul", 15000.0},
        {"Celta Preto", 17000.0},
        {"Celta Rosa", 16000.0}
    };

    int escolha;
    while (1) { // Loop infinito de menu(teste)
        
        printf("Menu:\n");
        printf("1. Listar usuários\n");
        printf("2. Listar carros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // função de listar usuários
                listarUsuarios(users, MAX_USERS);
                break;
            case 2:
                // função de listar carros
                listarCarros(cars,MAX_CARS);
                break;
            case 3:
                // Sair do programa
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
                break;
        }
        printf("\n"); // Adiciona uma linha em branco após a execução de uma opção
    }

    return 0;
}



/* Os % abaixo(especificadores de formato) diz o tipo de dado que ele está imprimindo na saída, e o \n é um
quebra linha */

/* o for executa uma repetição usando a variável 'i', e toda vez é adicionando como um 
novo elemento com cada argumento do Array*/
