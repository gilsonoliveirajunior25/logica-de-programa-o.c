#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
int i, j;
    char disciplinas[3][100];
    float notas[3][3];
    
    float peso[3],soma,somaPeso,mediaPonderada[3];

     peso[0] = 3;
     peso[1] = 3;
     peso[2] = 4;
    
    somaPeso += peso[0] + peso[1] + peso[2];


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

            soma += notas[i][j] * peso[j];
        }
        mediaPonderada[i] = soma / somaPeso;
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("%d disciplina: %s \n", i + 1, disciplinas[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d nota: %f peso %f \n", j + 1, notas[i][j],peso[j]);
        }
    
        printf("media: %f", mediaPonderada[i]);
    
    }



    

    return 0;
}