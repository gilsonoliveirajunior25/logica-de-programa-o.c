#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
int opcao;

printf("insira um valor entre 1 a 7:\n");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("domingo:\n");
    break;
case 2:
      printf("segunda- feira: dia util\n");
      break;
case 3:
      printf("terca - feira: dia util\n");
      break;
case 4:
      printf("quarta - feira:  dia util\n");
      break;
case 5:
      printf("quinta - feira: dia util\n");
      break;
case 6:
      printf("sexta - feira: é dia util final de semana otimo\n");
      break;
case 7:
      printf("sabado:isso finalmente\n");
      break;            
default:
printf("valor invalido:\n");
    break;
}




}