#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, nota[3];
float media,soma;

for (i = 0; i < 3; i++)
{
printf("digite a nota:\n");
scanf("%d",&nota[i]);
soma += nota[i];

}
media = soma / 3;
for ( i = 0; i < 3; i++)
{
    printf("%d nota: %d \n",i+1, nota[i]);

}
    printf("media:%f\n",media);

return 0;
}