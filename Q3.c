#include <stdio.h>
#include <stdlib.h>

int main()
{
    int susp, conf, mort;

    printf("Preencha com as seguinte informaçoes sobre a Dengue em Brasilia: \n");
    printf("Casos Suspeitos: \n");
    scanf("%d", &susp);
    printf("Casos Confirmados: \n");
    scanf("%d", &conf);
    printf("Quantidades de Mortes: \n");
    scanf("%d", &mort);

    printf("Informacoes sobre a Dengue em Brasilia: \n");
    printf("Casos Suspeitos: %d\n", susp);
    printf("Casos Confirmados: %d\n", conf);
    printf("Mortes Confirmadas: %d\n", mort);

    getchar(); // função que aguarda um caracter via teclado
}