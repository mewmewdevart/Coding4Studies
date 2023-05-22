#include <stdio.h>

int main(int argc, char **argv[])
{
    int a = 16;
    int *ptr = &a;

    printf("%p\n", ptr); // address pointed
    printf("%p\n", &a); // address of a
    printf("%d\n", *ptr); //to acess the value

    *ptr = 5; //  we are deferencing ptr
    printf("%d\n", *ptr); //to acess the new value

    int array[] = {5, 13, 20};
    printf("\n%d\n", array[1]);
    printf("%p", array); // The pointer the first element position of array[0]
    return (0);
}