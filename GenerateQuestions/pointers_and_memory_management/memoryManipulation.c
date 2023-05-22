#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int arr1[] = {1, 2};
    int arr2[] = {1, 2};

    if (memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
    {
        printf("Arrays are the same!\n");
    } else {
        printf("Arrays are not the same!\n");
    }
    //Link: https://www.youtube.com/watch?v=ypG9W33LOTk&list=PLfqABt5AS4FkIiyvV8mnZmf3p6PxbAtc8&index=3
    return (0);
}