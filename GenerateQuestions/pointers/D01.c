#include <stdio.h>
#include <stdlib.h>

// Desafio 1: Troque os valores de duas variáveis usando ponteiros.

void ft_swap(int *a, int *b);

int main (void)
{
    int a = 5;
    int b = 7;

    printf("Antes: %d e %d\n", a, b);
    ft_swap(&a, &b);
    printf("Depois: %d e %d\n", a , b);
    return (0);
}

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}