#include <unistd.h>
#include <stdio.h>

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

void *ft_rotone(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] < 'z' || str[i] >= 'A' && str[i] < 'Z')
            str[i] += 1;
        else if (str[i] == 'z' || str[i] == 'Z')
            str[i] -= 25;
        ft_putchar(str[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_rotone(argv[1]);
    else
        ft_putchar('\n');
    ft_putchar('\n');
    return (0);
}