#include <stdio.h>

int main()
{
    int marcaA, marcaB, marcaC;

    printf("Quantidades de chuteiras da Marca A:");
    scanf("%d", &marcaA);
    printf("Quantidades de chuteiras da Marca B:");
    scanf("%d", &marcaB);
    printf("Quantidades de chuteiras da Marca C:");
    scanf("%d", &marcaC);

    printf("Existem %d chuteiras da Marca A \n", marcaA);
    printf("Existem %d chuteiras da Marca B \n", marcaB);
    printf("Existem %d chuteiras da Marca C \n", marcaC);

    printf("\t Marca A %d\n", marcaA);
    printf("\t Marca B %d\n", marcaB);
    printf("\t Marca C %d\n", marcaC);
}