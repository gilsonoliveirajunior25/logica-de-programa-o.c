#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nota[4];
    float media, soma;

    for (i = 0; i < 4; i++)
    {
        printf("digite a nota:\n");
        scanf("%d", &nota[i]);
        soma += nota[i];
    }
    media = soma / 4;
    for (i = 0; i < 4; i++)
    {
        printf("%d nota: %d \n", i + 1, nota[i]);
    }
    printf("media:%f\n", media);
    if (media >= 7)
    {
        printf("aprovado:");
    }
    else if(media >= 5){
        
            printf("recuperacao:");
    }
    else 
    {
        printf("reprovado:");
    }

    return 0;
}