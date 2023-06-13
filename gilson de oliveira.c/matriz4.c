#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () 
{
int i,j;
char bandas[3][100];
char integrantes[3][5][100];

for ( i = 0; i < 3; i++)
{
     printf("digite o nome da %d °banda:", i + 1);
        fflush(stdin);
        gets(bandas[i]);

        for ( j = 0; j < 5; j++)
        {
            printf("digite o nome dos integrante:");
            scanf("%s",integrantes[i][j]);
            
        }
        
}





return 0;
}