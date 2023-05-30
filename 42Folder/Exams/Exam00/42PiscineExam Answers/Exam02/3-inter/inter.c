#include <unistd.h>

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

int ft_strchr(char *str, char ch)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return (1);
        i++;
    }
    return (0);
}

void ft_strdoubles(char *s1, char *s2)
{
    int i;
    int seen[256] = {0}; // Array to track seen characters

    i = 0;
    while (s1[i] != '\0')
    {
        if (ft_strchr(s2, s1[i]) && !seen[(unsigned char)s1[i]])
        {
            seen[(unsigned char)s1[i]] = 1;
            ft_putchar(s1[i]);
        }
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_strdoubles(argv[1], argv[2]);
    else
        ft_putchar('\n');
    return (0);
}
