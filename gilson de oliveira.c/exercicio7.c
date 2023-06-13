#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float mediaSalario, numeroFilhos, salario,mediaFilhos,continua,opcao;
    
    
     printf("digite o numeros de filhos:\n");
     scanf("%f", &numeroFilhos);
     do
    {
         printf("digite o salario:\n");
         scanf("%f", &salario);
         
    } while ( opcao!= 0);

    
     cont++;

     mediaSalario += salario;

     mediaFilhos += numeroFilhos;

        printf("numeros de quem respodeu pesquisa:%d\n",cont);
        printf("media de salario da pesquisa:%f\n",mediaSalario);
       printf("media de numeros de filhos:%f\n",mediaFilhos);

    return 0;
}