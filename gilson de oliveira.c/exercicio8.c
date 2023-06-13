#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par = 0, Impar = 0, numeros, mediaPar, somaPar;
    do
    {
        printf("digite um numeros:\n");
        scanf("%d", &numeros);
     
     
        if (numeros % 2 == 0)
        {
            par++;
        }
        else
        {
            Impar++;
        }
    

    mediaPar = somaPar + par;


    printf("quantidade de  numeros par:\n %d", par);
    printf("quantidade de numeros Impar:\n %d", Impar);
    printf("media de numeros par:\n %d", mediaPar);
 
   return 0; 
}