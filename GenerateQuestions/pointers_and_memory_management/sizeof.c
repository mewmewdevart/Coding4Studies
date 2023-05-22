#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 5;
    int arr[3] = {3, 9, 10}; // -> int *
    int array[1];

    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(a));

    printf("\n\n%ld\n", sizeof(int));
    printf("%ld\n", sizeof(arr)); // 4 bytes * size 3 of arr[3] = 12
    printf("%ld\n", sizeof(arr)/sizeof(arr[0])); // pegar o tamanho exato do array
    
    printf("%ld\n", sizeof(array)); //the standard size is 4 for int
    return (0);
}