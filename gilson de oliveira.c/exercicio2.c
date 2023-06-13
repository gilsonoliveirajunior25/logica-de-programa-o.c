#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade, contador;
    char nome[100],resposta[100];
    float media, nota,somaNotas;

    printf("digite um nome:\n ");
    scanf("%s", &nome);
    fflush(stdin);

    printf("digite sua idade:\n");
    scanf("%d", &idade);

    do
    {
        printf("digite sua nota:\n");
        scanf("%f", &nota);

        somaNotas += nota;
        contador++;

        printf("deseja digita mais uma nota:");
        scanf("%s", &resposta);
    } while (strcmp(resposta,"sim")==0);

    media = somaNotas/contador;

    if (media >= 7)
    {
        printf("aprovado:"); /* code */
    }
    else
    {
        printf("reprovado:");
    }

    printf("a média do aluno: %f \n", media);

    return 0;
}
