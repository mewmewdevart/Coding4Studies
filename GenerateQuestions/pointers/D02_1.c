#include <stdio.h>

float calcularMedia(int *array, int tamanho)
{
    int soma = 0;
    int i = 0;

    while (i < tamanho)
    {
        soma += *(array + i); //soma o valor apontado pelo ponteiro
        i++;
    }
    return (float)soma/tamanho;
}

int main(void)
{
    int array[] = {10, 10, 10, 10, 10};
    int tamanho = sizeof(array)/sizeof(array[0]);
    // sizeof(array) : 5 Elementos, cada elemento ocupa 4 bytes de memoria = 20 (5 elementos * 4bytes/por elemento)
    // sizeof(array[0]) : 4 bytes (pegando o primeiro elemento)
    // 20/4 = 5 : 5 é o tamanho do array
    float media = calcularMedia(array, tamanho);

    printf("O resultado da media é %.2f\n", media);
    return (0);
}