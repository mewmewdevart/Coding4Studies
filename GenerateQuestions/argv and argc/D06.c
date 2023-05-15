#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

// Desafio 6: Calcule a soma de todos os números passados como argumentos.

int main (int argc, char **argv)
{
    int i;
    int count;

    count = 0;
    if (argc <= 1)
    {
        printf("Por favor, insira mais de um argumento! ");
        exit(1);
    }
    i = 1;
    while(argv[i])
    {
        count += atoi(argv[i]);
        i++;
    }
    printf("O resultado da soma: %d ", count);
    return (0);
}