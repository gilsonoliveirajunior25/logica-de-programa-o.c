#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, ""); // para aceitar acentos.

    int media;

    do
    {
        printf("digite a media do aluno:");
        scanf("%d", &media);
    } while (media < 0 || media > 10);

    if (media >= 7)
    {
        printf("aprovado\n");
    }
    else if (media >= 5)
    {
        printf("recuperacao\n");
    }
    else
    {
        printf("reprovado\n");
    }

    return 0;
}