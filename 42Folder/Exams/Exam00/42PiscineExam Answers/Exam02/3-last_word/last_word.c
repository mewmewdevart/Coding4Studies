#include <unistd.h>
#include <stdio.h> 

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

int last_word(char *str)
{
    int i;

    while (str[i] != '\0')
        i++;
    while(str[i] == ' ' && str[i] == '\t')
        i--;
    while ((str[i] != ' ' && str[i] != '\t') && i >= 0)
		i--;
    i += 1;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return(1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    else
        ft_putchar('\n');
    return (0);
}