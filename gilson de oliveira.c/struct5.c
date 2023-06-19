#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

struct curso_Aluno
{
    float somaNotas,matricula,codigoDadisciplina,nota1,nota2,media;
    char nome[100];
    int i;

};

int main () 
{

struct curso_Aluno aluno[10];
int i;

for ( i = 0; i < 1; i++)
{
  printf("digite o nome:\n",i + 1);
  gets(aluno[i].nome);
  fflush(stdin);
  printf("digite a matricula:\n");
  scanf("%f",&aluno[i].matricula);
  printf("digite Codigo da Disciplina:\n");
  scanf("%f",&aluno[i].codigoDadisciplina);
  fflush(stdin);
  printf("digite a primeira nota1:\n");
  scanf("%f",&aluno[i].nota1);
  printf("digite a segunda nota:\n");
  scanf("%f",&aluno[i].nota2);
  fflush(stdin);

aluno[i].somaNotas = (aluno[i].nota1 + aluno[i].nota2) /2;
}

for ( i = 0; i < 1; i++)
{
    printf("nome: %s \n",aluno[i].nome);
    printf("matricula: %f \n",aluno[i].matricula);
    printf("codigo da disciplina:%f \n",aluno[i].codigoDadisciplina);
    printf("media:%f \n",aluno[i].somaNotas);
}



return 0;
}
