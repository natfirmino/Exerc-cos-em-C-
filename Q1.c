#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	char palavras[3][30];

	for (i = 0; i < 3; i++)
	{
		printf("Informe palavra %d:", i + 1);
		gets(palavras[i]);
	}
	printf("\n ::: Palavras em ordem reversa :::\n");

	for (i = 2; i >= 0; i--)
		printf("%s", palavras[i]);
	return 0;
}
