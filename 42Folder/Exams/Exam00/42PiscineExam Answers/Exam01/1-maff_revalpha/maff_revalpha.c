#include <unistd.h>

int main(void)
{
    char letter;
    int number;

    letter = 'z';
    number = 0;
    while (letter >= 'a')
    {
        if ((number%2) == 0)
            write(1, &letter, 1);
        else
        {
            letter-=32;
            write(1, &letter, 1);
            letter+=32;
        }
        letter--;
        number++;
    }
    return (0);
}