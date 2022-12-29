#include <locale.h>
#include <stdio.h>

main()
{
    setlocale(LC_ALL, "portuguese");

    int t = 0, n;

    while (t < 45)
    {
        printf("t= %d\n", t);
        printf("Numero: ");
        scanf("%d", &n);

        t += n;
    }
    printf("total = %d\n", t);
}