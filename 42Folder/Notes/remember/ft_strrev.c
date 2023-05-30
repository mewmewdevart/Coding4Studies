#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len, i;
    char tmp;

    i = len = 0;
    while(str[len] != '\0')
        len++;
    len -= 1;
    while(i < len)
    {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;

        i++;
        len--;
    }
    return (str);
}

int main(void)
{
    char str[] = "larissa";
    ft_strrev(str);
    printf("%s", str);
    return (0);
}