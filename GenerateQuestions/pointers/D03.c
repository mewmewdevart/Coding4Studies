#include <stdio.h>

// Desafio 3: Escreva uma função para encontrar o maior elemento em um array usando ponteiros.

int main(void)
{
    int array[] = {10, 5, 20, 6, 4, 21, 15};
    int i;
    int number;

    i = 0;
    number = 0;
    while(array[i] != '\0')
    {
        if (number < array[i])
            number = *(array + i);
        i++;
    }
    printf("O maior numero encontrada é %d!\n", number);
    return (0);
}