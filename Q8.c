#include <stdio.h>
#include <locale.h>

int main()
{

    int vet[10], i, negat = 0; // Declaracão de variavel
    setlocale(LC_ALL, "");

    // Estrutura de repeticao para entrada de dados
    for (i = 0; i <= 9; i++)
    {

        printf("Informe a posicão %i: ", i + 1);
        scanf("%d", &vet[i]);
    }
    // Estrutura de repeticao para imprimir dados
    for (i = 0; i <= 9; i++)
    {
        negat = vet[i];
        if (negat < 1)
        { // condicão caso o número for menor que 1.
            negat = 1;
        }
        printf("%i ", negat); // imprimir vetor  .
    }
}
