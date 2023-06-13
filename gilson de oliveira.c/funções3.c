#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int menorValor(num1,num2,menorNumero)
    {

        if (num1 < num2)
        {
        menorNumero = num1;

        }else{
        menorNumero = num2;
    
        }
    }

        


int main()
{
    setlocale(LC_ALL, "");

    int num1, num2,menorNumero;

    printf("digita o primeiro numero\n");
    scanf("%d", &num1);
    printf("digita o segundo numero\n");
    scanf("%d", &num2);

    
    menorNumero = menorValor(num1,num2);
    
    
    printf("menor numero: %d \n", menorNumero);
return 0;
}


