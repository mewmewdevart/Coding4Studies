#include <stdio.h>
#include <unistd.h>

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

int ft_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return(1);
    return (0);
}

int ft_upper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return(1);
    return (0);
}

char *ft_rot(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'm')
            str[i] += 13;
        else if (str[i] >= 'A' && str[i] <= 'M')
            str[i] += 13;
        else if(str[i] >= 'N' && str[i] <= 'Z')
            str[i] -= 13;
        else if(str[i] >= 'n' && str[i] <= 'z')
            str[i] -= 13;
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%s", ft_rot(argv[1]));
    else
        ft_putchar('\n');
    return (0);
}