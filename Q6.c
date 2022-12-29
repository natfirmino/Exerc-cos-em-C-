#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Nataline Firmino\n\n");
    float n1, n2, n3, n4, media;
    int exit;
    // aqui tem a influência do usuário, pois precia ser gerado um comando para parar, então temos as opções 1 e 2, o while precisa de uma condição para poder parar !!!!
    do
    {
        //
        // Executa o loop e depois verifica
        printf("Digite a 1° nota:");
        scanf("%f", &n1);
        printf("Digite a 2° nota:");
        scanf("%f", &n2);
        printf("Digite a 3° nota:");
        scanf("%f", &n3);
        printf("Digite a 3° nota:");
        scanf("%f", &n4);

        media = (n1 + n2 + n3 + n4) / 4;
        printf("Media do aluno = %2.f\n", media);

        printf("Digite 1 para continuar e 2 para sair: ");
        scanf("%d", &exit);

    } while (exit == 1);
    return 0;
    getchar();
}
