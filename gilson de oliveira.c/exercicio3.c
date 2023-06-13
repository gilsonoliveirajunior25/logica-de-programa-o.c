#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i,valor,contaPar=0,contaImpar=0;

for ( i = 0; i < 5; i++)
{
    printf("digite  um valor:");
    scanf("%d",&valor);
  
  if (valor % 2 ==0)
  {
    contaPar++;
  }else{
    contaImpar++; 
  }
}
  
  printf("par: %d\n",contaPar);
  printf("Impar%d \n",contaImpar);
   

return 0;
}