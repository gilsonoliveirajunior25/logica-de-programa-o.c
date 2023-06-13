#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valor(float dados)
{
    float centi;
    centi = dados * 100;
    
printf("valor em metro: %.0f\n",dados);
printf("valor em centimetros: %.0f\n",centi);
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