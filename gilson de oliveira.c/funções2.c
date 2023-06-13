#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorValor(num1,num2,maiorNumero)
{
    if (num1 > num2)
    {
        maiorNumero = num1;
    }
    else{
            maiorNumero = num2;
    }

}  

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

    int num1, num2,menorNumero,maiorNumero;

    printf("digita o primeiro numero\n");
    scanf("%d", &num1);
    printf("digita o segundo numero\n");
    scanf("%d", &num2);

    maiorNumero = maiorValor(num1,num2);
    menorNumero = menorValor(num1,num2);
    
    printf("maior numero: %d \n", maiorNumero);
    printf("menor numero: %d \n", menorNumero);

    return 0;
}
