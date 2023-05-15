#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

// Desafio 5: Verifique se um arquivo com o nome passado como argumento existe no diretório atual.

int main (int argc, char **argv)
{
    int file;

    if (argc != 2)
        return (0);
    else
    {
        file = access(argv[1], F_OK);
        if (file == -1)
        {
            printf("It is not a file: %s", argv[1]);
            exit(1);
        }
        
            printf("It is a file: %s ", argv[1]);
    }
    return (0);
}