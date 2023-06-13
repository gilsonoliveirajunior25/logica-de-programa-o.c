#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
int i, j;
    char disciplinas[3][100];
    float notas[3][3];
    float media[3];
    float soma;
    int opcao;

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
 
     {
    

    do
    {
      printf("1 - Mostrar nome da disciplina e a media:\n");
      printf("2 - o nome da disciplina e a situacao:\n");
      printf("3 - exibir todas as informacao:\n");
      printf("4 - sair do programa:\n");
    
    
    
    
    } while (notas[i][j]< 0 || notas[i][j>10]);
    {
        
    }
    

  return 0;
}
}