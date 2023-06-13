#include <stdio.h>
#include <stdlib.h>

int main()
{
char nome[5][100];
int i, idade[5];

for ( i = 0; i < 5; i++)
{
    printf("digite seu nome:");
    fflush(stdin);
    gets(nome[i]);
    printf("digite sua idade:");
    scanf("%d",&idade[i]);
}

for ( i = 0; i < 5; i++)
{
    printf("seu nome:%s \n",nome[i]);
    printf("sua idade:%d \n",idade[i]);
}

return 0;
}