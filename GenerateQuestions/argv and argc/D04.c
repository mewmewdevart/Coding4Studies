#include <stdio.h>
#include <stdlib.h>

// Desafio 4: Conte e imprima o número de argumentos que são números inteiros.

int main(int argc, char **argv)
{
    int i;
    int count;
    char *end_ptr;
    long number;

    i = 1;
    count = 0;
    while (i < argc)
    {
        number = strtol(argv[i], &end_ptr, 10); // convert a string to a long integer
        if (*end_ptr == '\0') // Verifica se toda a string foi convertida em um número
        {
            printf("São inteiros: %ld \n", number);
            count++;
        }
        i++;
    }
    printf("\nNumero total de argumentos inteiros: %d\n", count);
    return (0);
}