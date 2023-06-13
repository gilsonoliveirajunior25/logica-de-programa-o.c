#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
int i, j;
    char disciplinas[3][250];
    float notas[3][3];
    float media[3];
    float soma;

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome da %d °disciplina:", i + 1);
        fflush(stdin);
        gets(disciplinas[i]);

        soma = 0;

        for (j = 0; j < 3; j++)
        {
            printf("digite a %d °nota", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / 3;
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("%d disciplina: %s \n", i + 1, disciplinas[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d nota: %f \n", j + 1, notas[i][j]);
        }
    
        printf("media: %f", media[i]);
    
    }



    

    return 0;
}