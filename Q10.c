#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, j;
    float nots[10][2], media[10];
    printf("Questao 5\n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota do %d aluno: ", i + 1);
            scanf("%f", &nots[i][j]);
            media[i] += nots[i][j] / 2;
        }
    }
    for (int c = 0; c < 10; c++)
    {

        printf("A media do aluno %d eh %.2f\n", c + 1, media[c]);
    }
    getch();
}
