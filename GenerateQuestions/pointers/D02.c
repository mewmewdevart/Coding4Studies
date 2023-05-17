#include <stdio.h>

// Desafio 2: Implemente uma função para calcular a média de um array de números usando ponteiros.

int main(void)
{
    int array[] = {10, 10, 10, 10, 10};
    int i = 0;
    int  calc = 0;

    while(array[i])
    {
        calc += array[i];
        i++;
    }
    printf("Calculo: %d Divisor: %d\n", calc, i);
    calc = calc/i;
    printf("O resultado da média é %d\n", calc);

}