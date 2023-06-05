#include <unistd.h>

int main(void)
{
    char nb;

    nb = '9';
    while (nb >= '0')
    {
        write(1, &nb, 1);
        nb--;
    }
    return (0);
}