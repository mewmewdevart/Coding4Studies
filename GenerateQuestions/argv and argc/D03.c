#include <stdio.h>
#include <stdlib.h>

// Desafio 3: Verifique se o primeiro argumento passado é um número primo.

int main (int argc, char **argv)
{
    int i;

    if (argc != 2)
        printf("Insira apenas um numero!");
    else
        {
            i = atoi(argv[1]);
            if ((i % 2) != 0 || i == 2)
                printf("É primo!");
            else
                printf("Não é primo!");
        }
    return (0);
}