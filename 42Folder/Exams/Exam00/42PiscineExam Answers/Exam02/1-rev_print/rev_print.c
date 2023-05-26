#include <unistd.h>

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

char *ft_rev_print (char *str)
{
    int len;

    len = 0;
    while(str[len] != '\0')
        len++;
    while(len > 0)
    {
        len--;
        ft_putchar(str[len]);
    }
    ft_putchar('\n');
    return (str);
}
