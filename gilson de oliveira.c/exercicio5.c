#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "");

  int i, numeros[3];
  float somaNotas = 0;

  for (i = 0; i < 3; i++)
  {
    printf("digite o numero:\n");
    scanf("%d", &numeros[i]);
   somaNotas = somaNotas + numeros[i]; 
  }




{
   printf("soma de todos valores sao %f:\n", somaNotas);
}

return 0;
}