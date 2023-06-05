#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isspace(char ch)
{
    if (ch == '\f' || ch == '\n' || ch == '\n' || ch == 'r' || ch == '\t' || ch == '\v' || ch == ' ')
        return (1);
    return (0);
}

int ft_isdigit(int numb)
{
    if (numb >= '0' && numb <= '9')
        return (1);
    return (0);
}

int	ft_atoi(const char *str)
{
    int i, symbol, convert;

    convert = i = 0;
    symbol = 1;
    while(!*str)
        return (0);
    while(ft_isspace(str[i])) // Verifica se tem white spaces
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            symbol *= -1;
        i++;
    }
    while(ft_isdigit(str[i]))
    {
        convert = (convert * 10) + (str[i] - 48);
        i++;
    }
    return (symbol*convert);
}

int main(void)
{
    char str[] = "9";

    printf("%d", ft_atoi(str));
     printf("\n%d", atoi(str));
    return (0);
}