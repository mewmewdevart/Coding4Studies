#include <stdio.h>

// Desafio 2: Imprima todos os argumentos passados para o programa em ordem inversa.

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while (*str++)
        len++;
    return (len);
}

void ft_swap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int	main(int argc, char **argv)
{
	int i;
    int len;

    i = 1;
    len = argc - 1;
    while (i < len)
    {
        ft_swap(&argv[i], &argv[len]);
        i++;
    }

    i = 1;
    while(i < argc)
    {
        printf(" %s", argv[i]);
        i++;
    }
	return (0);
}