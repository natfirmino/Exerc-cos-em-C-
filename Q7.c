#include <stdio.h>

struct dados
{
    int idade;
    char nome[200];
    char endereco[200];
};

int main()
{
    struct dados d1;
    printf("Entre com o nome: ");
    // scanf("%s", d1.nome);
    fflush(stdin);
    fgets(d1.nome, 200, stdin);
    printf("Digite a idade: ");
    scanf("%d", &d1.idade);
    printf("Digite o endereco: ");
    fflush(stdin);
    fgets(d1.endereco, 200, stdin);
    // scanf("%s", d1.endereco);
    printf("\nNome: %s \nIdade: %d", d1.nome, d1.idade);
    printf("\nEndereço: %s", d1.endereco);

    return 0;
    getchar();
}
