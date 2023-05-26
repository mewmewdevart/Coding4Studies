#include <unistd.h>

void ft_putchar(char ch);
int ft_firstword(char *str);

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_firstword(argv[1]);
    else
        ft_putchar('\n');
    return (0);
}

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

int ft_firstword(char *str)
{
    int i = 0;

    //first loop to skip white spaces
    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;
    //second loop will start when there will be character different than space
    while(str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar(str[i]);
    return (0);
}