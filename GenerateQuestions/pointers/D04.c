#include <stdio.h>

// Desafio 4: Crie uma função que inverta a ordem dos elementos em um array usando ponteiros.

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int array[] = {10, 20, 40};
    int i = 0;
    int len;

    len = sizeof(array)/sizeof(array[0]);
    while (i < len/2)
    {
        ft_swap(&array[i], &array[len - 1 - i]);
        i++;
    }
    i = 0;
    while(i < len)
    {
        printf(" %d", array[i]);
        i++;
    }
    return (0);
}