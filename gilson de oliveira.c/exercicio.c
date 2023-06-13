#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[100];
    float media, nota1, nota2;

    printf("digite um nome:\n ");
    scanf("%s", &nome);

    fflush(stdin);

    printf("digite sua idade:\n");
    scanf("%d", &idade);

    printf("digite sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("digite sua segunda nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("aprovador:"); /* code */
    }
    else
    {
        printf("reprovador:");
    }
    printf("a media do aluno: %f \n", media);
    return 0;
}