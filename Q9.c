#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // para printar os caracteres especiais e acentuação
#include <string.h> //para usar as funções strupr e strlwr
#include <ctype.h>  // para usar as funções toupper e tolower

int main()
{
    setlocale(LC_ALL, "");
    int cont = 0, tam, numero, cont_num = 0;

    printf("informe o tamanho da matriz: ");
    scanf("%d", &tam);
    int num[tam][tam];
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            num[i][j] = 1 + rand() % 7;
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%-5d", num[i][j]);
        }
        printf("\n");
    }
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (i == j)
            {
                if (num[i][j] == numero)
                {
                    cont_num++;
                }
            }
        }
    }
    if (cont_num != 0)
        printf("Esse numero tem na diagonal principal");
    else
        printf("Esse número não tem na diagonal principal");

    getch();
    return 0;
}
