#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float numeros[5], maior, menor = 9999999;

    // fflush(stdin);

    for (i = 0; i < 5; i++)
    {
        printf("digite os numeros:");
        scanf("%f", &numeros[i]);

        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    printf("%f numeros %f \n", i + 1, numeros[i]);
    printf("maior numero %f\n", maior);
    printf("menor numero %f \n ", menor);

    return 0;
}
