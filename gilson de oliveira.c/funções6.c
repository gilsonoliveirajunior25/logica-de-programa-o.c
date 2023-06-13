#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valor(float dados)
{
    float centimetros;
    centimetros = dados * 100;
    
printf("valor em metro: %.0f\n",dados);
printf("valor em centimetros: %.0f\n",centimetros);
}
int main ()
{
    float dado;
    printf("digite seu valor em metro?\n");
    scanf("%f",&dado);
    system("cls");
    valor(dado);
    return 0;
}