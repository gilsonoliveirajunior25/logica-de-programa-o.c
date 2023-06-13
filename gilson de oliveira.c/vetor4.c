#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, par=0, Impar=0,numeros[6];
for ( i = 0; i < 6; i++)
{
    printf("digite os numeros:");
    scanf("%d",&numeros[i]);
    if (numeros[i] % 2 ==0 )
    {
        par++;
    }
    
    else{
        Impar++;
    }
   
    
}
     printf("os numeros pares sao:%d\n",par);
    printf("os numeros impar sao:%d\n",Impar);
return 0;
}