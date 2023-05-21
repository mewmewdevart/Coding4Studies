#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    *malloc_string;
    char    *stack_string;
    char    array_string[] = "Larissa";

    stack_string = "Hello";
    malloc_string = malloc(10);
    strcpy(malloc_string, "Uva");

    printf("Malloc = %2d\n", (int) strlen(malloc_string));
    printf("Stack = %2d\n", (int) strlen(stack_string));
    printf("Array = %2d\n", (int) strlen(array_string));

    printf("\n\n");

    printf("Malloc = %2d\n", (int) (sizeof(malloc_string)));
    printf("Stack = %2d\n", (int) (sizeof(stack_string)));
    printf("Array = %2d\n", (int) (sizeof(array_string)));
    
    return (0);
}