#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void resultadoFinal(float media)
{

if (media >= 7)  {
    printf("aprovado.");
} else if (media >= 5)
{
    printf("recuperação.");
} else
{
    printf("reprovado.");
}

int main () 
{
setlocale(LC_ALL,"portuguese");

float primeiraNota, segundaNota,media;

printf("digite a primeira nota:");
scanf("%f", &primeiraNota);

printf("digite a segunda nota:");
scanf("%f",&segundaNota);

media = (primeiraNota + segundaNota)/2

resultadoFinal(media)

return 0;
}


}