#include <stdio.h>
#include <stdlib.h>

// Desafio 7: Crie um programa que receba uma sequência de números como argumentos e imprima o maior e o menor número.

int main(int argc, char **argv)
{
    int i;
    int number;
    int big;
    int small;

    i = 2;
    small = big = atoi(argv[1]); // Inicializar com o primeiro número
    if (argc <= 1)
    {
        printf("Por favor, insira uma sequência de números como argumentos!\n");
        exit(1);
    }
    while (argv[i])
    {
        number = atoi(argv[i]);
        if (number > big)
            big = number;
        if (number < small)
            small = number;
        i++;
    }
    printf("O maior numero é: %d\n", big);
    printf("O menor numero é: %d\n", small);
    return (0);
}